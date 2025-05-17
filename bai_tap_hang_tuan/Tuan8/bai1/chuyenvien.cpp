#include "bai1.h"

ChuyenVien::ChuyenVien() :NhanSu() {
	maDuAnGiaoDuc.clear();
	namLamViec = 0;
}
ChuyenVien::ChuyenVien(string hoTen, string ngaySinh, string maSo, vector<string> maDuAnGiaoDuc, int namLamViec) : NhanSu(hoTen, ngaySinh, maSo) {
	this->maDuAnGiaoDuc = maDuAnGiaoDuc;
	this->namLamViec = namLamViec;
}
ChuyenVien::ChuyenVien(const ChuyenVien& src) : NhanSu(src) {
	this->maDuAnGiaoDuc = src.maDuAnGiaoDuc;
	this->namLamViec = src.namLamViec;
}
ChuyenVien::~ChuyenVien() { maDuAnGiaoDuc.clear(); }
float ChuyenVien::tinhLuong() {
	int check = 0;
	for (auto it : maDuAnGiaoDuc) {
		if (it[0] == 'T') check += 1;
	}
	return (namLamViec * 4 + check) * 18000;
}
void ChuyenVien::nhapThongTinNhanSu() {
	NhanSu::nhapThongTinNhanSu();
	cout << "Nhap so du an: ";

	int n;
	cin >> n;
	cin.ignore();
	cout << "Nhap ma du an giao duc (Chu-So-So): " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Du an " << i + 1 << ": ";
		string line_info;
		getline(cin, line_info);

		maDuAnGiaoDuc.push_back(line_info);
	}

	cout << "Nhap so nam lam viec: "; cin >> namLamViec;
	cin.ignore();
}
void ChuyenVien::xuatThongTinNhanSu() {
	cout << "-------CHUYEN VIEN-------" << endl;

	NhanSu::xuatThongTinNhanSu();
	cout << "Danh sach cac du an: ";
	for (auto it : maDuAnGiaoDuc) cout << it << "; ";
	cout << endl << "So nam lam viec: " << namLamViec << endl;
}

string ChuyenVien::getTenViTri()
{
	return "Chuyen vien";
}
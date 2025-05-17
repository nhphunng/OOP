#include "bai1.h"

NghienCuuVien::NghienCuuVien() : NhanSu() {

	maDuAnNghienCuu.clear();
	namNghienCuu = 0;
}
NghienCuuVien::NghienCuuVien(string hoTen, string ngaySinh, string maSo, vector<string> maDuAnNghienCuu, int namNghienCuu) :NhanSu(hoTen, ngaySinh, maSo) {

	this->maDuAnNghienCuu = maDuAnNghienCuu;
	this->namNghienCuu = namNghienCuu;
}
NghienCuuVien::NghienCuuVien(const NghienCuuVien& src) : NhanSu(src) {
	this->maDuAnNghienCuu = src.maDuAnNghienCuu;
	this->namNghienCuu = src.namNghienCuu;
}
NghienCuuVien::~NghienCuuVien() { maDuAnNghienCuu.clear(); }
float NghienCuuVien::tinhLuong() {
	int check = 0;
	for (auto it : maDuAnNghienCuu) {
		if (it[0] == 'D') check += 1;
	}
	return (namNghienCuu * 2 + check) * 20000;
}
void NghienCuuVien::nhapThongTinNhanSu() {
	NhanSu::nhapThongTinNhanSu();
	cout << "Nhap so du an: ";

	int n;
	cin >> n;
	cin.ignore();
	cout << "Nhap ma du an nghien cuu (Chu-So-So): " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Du an " << i + 1 << ": ";
		string line_info;
		getline(cin, line_info);

		maDuAnNghienCuu.push_back(line_info);
	}

	cout << "Nhap so nam nghien cuu: "; cin >> namNghienCuu;
	cin.ignore();
}
void NghienCuuVien::xuatThongTinNhanSu() {
	cout << "-------NGHIEN CUU VIEN-------" << endl;

	NhanSu::xuatThongTinNhanSu();
	cout << "Danh sach cac du an: ";
	for (auto it : maDuAnNghienCuu) cout << it << "; ";
	cout << endl << "So nam nghien cuu: " << namNghienCuu << endl;
}

string NghienCuuVien::getTenViTri()
{
	return "Nghien cuu vien";
}


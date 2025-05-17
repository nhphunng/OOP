#include "bai1.h"


ThucTapSinh::ThucTapSinh() :NhanSu() {
	maDuAnNghienCuuDuBi.clear();
	thoiGianThucTap = 0;
}
ThucTapSinh::ThucTapSinh(string hoTen, string ngaySinh, string maSo, vector<string> maDuAnNghienCuuDuBi, int thoiGianThucTap) : NhanSu(hoTen, ngaySinh, maSo) {
	this->maDuAnNghienCuuDuBi = maDuAnNghienCuuDuBi;
	this->thoiGianThucTap = thoiGianThucTap;
}
ThucTapSinh::ThucTapSinh(const ThucTapSinh& src) : NhanSu(src) {
	this->maDuAnNghienCuuDuBi = src.maDuAnNghienCuuDuBi;
	this->thoiGianThucTap = src.thoiGianThucTap;
}
ThucTapSinh::~ThucTapSinh() { maDuAnNghienCuuDuBi.clear(); }
float ThucTapSinh::tinhLuong() {
	int check = 0;
	for (auto it : maDuAnNghienCuuDuBi) {
		if (it[0] == 'R') check += 1;
	}
	return (check * 10000) * 0.1;
}
void ThucTapSinh::nhapThongTinNhanSu() {
	NhanSu::nhapThongTinNhanSu();
	cout << "Nhap so du an: ";

	int n;
	cin >> n;
	cin.ignore();
	cout << "Nhap ma du an du bi (Chu-So-So): " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Du an " << i + 1 << ": ";
		string line_info;
		getline(cin, line_info);

		maDuAnNghienCuuDuBi.push_back(line_info);
	}

	cout << "Nhap so thang thuc tap: "; cin >> thoiGianThucTap;
	cin.ignore();
}
void ThucTapSinh::xuatThongTinNhanSu() {
	cout << "-------THUC TAP SINH-------" << endl;

	NhanSu::xuatThongTinNhanSu();
	cout << "Danh sach cac du an: ";
	for (auto it : maDuAnNghienCuuDuBi) cout << it << "; ";
	cout << endl << "So thang thuc tap: " << thoiGianThucTap << endl;
}

string ThucTapSinh::getTenViTri()
{
	return "Thuc tap sinh";
}
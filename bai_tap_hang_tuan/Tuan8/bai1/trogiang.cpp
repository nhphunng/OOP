#include "bai1.h"

TroGiang::TroGiang() : NhanSu() {
	soMonTroGiang = 0;
}
TroGiang::TroGiang(string hoTen, string ngaySinh, string maSo, int soMonTroGiang) : NhanSu(hoTen, ngaySinh, maSo) {

	this->soMonTroGiang = soMonTroGiang;
}
TroGiang::TroGiang(const TroGiang& src) : NhanSu(src) {
	this->soMonTroGiang = src.soMonTroGiang;
}
TroGiang::~TroGiang() {}
float TroGiang::tinhLuong() {
	return (soMonTroGiang * 0.3) * 18000;
}
void TroGiang::nhapThongTinNhanSu() {
	NhanSu::nhapThongTinNhanSu();
	cout << "Nhap so mon tro giang: "; cin >> soMonTroGiang;
	cin.ignore();
}
void TroGiang::xuatThongTinNhanSu() {
	cout << "-------TRO GIANG-------" << endl;

	NhanSu::xuatThongTinNhanSu();
	cout << "So mon tro giang: " << soMonTroGiang << endl;
}
string TroGiang::getTenViTri()
{
	return "Tro giang";
}
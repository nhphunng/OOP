#include "bai1.h"

NhanSu::NhanSu() {
	hoTen = "";
	ngaySinh = "";
	maSo = "";
}
NhanSu::NhanSu(string hoTen, string ngaySinh, string maSo) {
	this->hoTen = hoTen;
	this->ngaySinh = ngaySinh;
	this->maSo = maSo;
}
NhanSu::NhanSu(const NhanSu& src) {
	this->hoTen = src.hoTen;
	this->ngaySinh = src.ngaySinh;
	this->maSo = src.maSo;
}
NhanSu::~NhanSu() {}
istream& operator>>(istream& in, NhanSu& src) {
	cout << "Nhap ho ten: "; in >> src.hoTen;
	cout << "Nhap ngay, thang, nam sinh: "; in >> src.ngaySinh;
	cout << "Nhap ma so: "; in >> src.maSo;

	return in;
}
ostream& operator<<(ostream& out, const NhanSu& src) {
	out << "Ho ten: " << src.hoTen << endl;
	out << "DD/MM/YYYY: " << src.ngaySinh << endl;
	out << "Ma so: " << src.maSo << endl;

	return out;
}
void NhanSu::nhapThongTinNhanSu() {
	cout << "Nhap ho ten: "; getline(cin, this->hoTen);
	cout << "Nhap ngay, thang, nam sinh: "; getline(cin, this->ngaySinh);
	cout << "Nhap ma so: "; getline(cin, this->maSo);
}
void NhanSu::xuatThongTinNhanSu() {
	cout << "Ho ten: " << hoTen << endl;
	cout << "DD/MM/YYYY: " << ngaySinh << endl;
	cout << "Ma so: " << maSo << endl;
}
#include "bai1.h"

GiangVien::GiangVien() : NhanSu() {

	hocHam = "";
	hocVi = "";
	soNamGiangDay = 0;
	monHoc.clear();
}
GiangVien::GiangVien(string hoTen, string ngaySinh, string maSo, string hocHam, string hocVi, int soNamGiangDay, vector<string> monHoc) :NhanSu(hoTen, ngaySinh, maSo) {

	this->hocHam = hocHam;
	this->hocVi = hocVi;
	this->soNamGiangDay = soNamGiangDay;
	this->monHoc = monHoc;
}
GiangVien::GiangVien(const GiangVien& src) : NhanSu(src) {

	this->hocHam = src.hocHam;
	this->hocVi = src.hocVi;
	this->soNamGiangDay = src.soNamGiangDay;
	this->monHoc = src.monHoc;
}
GiangVien::~GiangVien() {
	monHoc.clear();
}
float GiangVien::tinhLuong() {
	return (monHoc.size() * soNamGiangDay * 0.12) * 20000;
}
void GiangVien::nhapThongTinNhanSu() {
	NhanSu::nhapThongTinNhanSu();
	cout << "Nhap hoc ham: "; getline(cin, this->hocHam);
	cout << "Nhap hoc vi: "; getline(cin, this->hocVi);
	cout << "Nhap so nam giang day: "; cin >> this->soNamGiangDay;
	cin.ignore();
	cout << "Nhap so mon hoc: ";

	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Mon hoc " << i + 1 << ": ";
		string line_info;
		getline(cin, line_info);

		monHoc.push_back(line_info);
	}
}
void GiangVien::xuatThongTinNhanSu() {
	cout << "-------GIANG VIEN-------" << endl;

	NhanSu::xuatThongTinNhanSu();
	cout << "Hoc ham: " << hocHam << endl;
	cout << "Hoc vi: " << hocVi << endl;
	cout << "So nam giang day: " << soNamGiangDay << endl;
	cout << "Danh sach cac mon hoc" << endl;
	for (auto it : monHoc) cout << it << ";";
	cout << endl;
}
string GiangVien::getTenViTri()
{
	return "Giang Vien";
}
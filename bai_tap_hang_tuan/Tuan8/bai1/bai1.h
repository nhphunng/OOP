#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const string LINE_BREAK = "--------------------------------\n";

class NhanSu {
	string hoTen;
	string ngaySinh;
	string maSo;
public:
	NhanSu();
	NhanSu(string hoTen, string ngaySinh, string maSo);
	NhanSu(const NhanSu& src);
	virtual ~NhanSu();
	friend istream& operator>>(istream& in, NhanSu& src);
	friend ostream& operator<<(ostream& out, const NhanSu& src);
	virtual void nhapThongTinNhanSu();
	virtual void xuatThongTinNhanSu();
	virtual float tinhLuong() = 0;

	virtual NhanSu *Clone() = 0; 
	virtual string getTenViTri() = 0;
	string getTenNhanSu();
	string getMaSo();
};

class GiangVien : public NhanSu {
	string hocHam;
	string hocVi;
	int soNamGiangDay;
	vector <string> monHoc;
public:
	GiangVien();
	GiangVien(string hoTen, string ngaySinh, string maSo, string hocHam, string hocVi, int soNamGiangDay, vector<string> monHoc);
	GiangVien(const GiangVien& src);
	~GiangVien();
	float tinhLuong();
	void nhapThongTinNhanSu();
	void xuatThongTinNhanSu();
	string getTenViTri();
	NhanSu* Clone();
};

class TroGiang : public NhanSu {
	int soMonTroGiang;
public:
	TroGiang();
	TroGiang(string hoTen, string ngaySinh, string maSo, int soMonTroGiang);
	TroGiang(const TroGiang& src);
	~TroGiang();
	float tinhLuong();
	void nhapThongTinNhanSu();
	void xuatThongTinNhanSu();
	string getTenViTri();
	NhanSu* Clone();

};

class NghienCuuVien : public NhanSu {
	vector<string> maDuAnNghienCuu;
	int namNghienCuu;
public:
	NghienCuuVien();
	NghienCuuVien(string hoTen, string ngaySinh, string maSo, vector<string> maDuAnNghienCuu, int namNghienCuu);
	NghienCuuVien(const NghienCuuVien& src);
	~NghienCuuVien();
	float tinhLuong();
	void nhapThongTinNhanSu();
	void xuatThongTinNhanSu();
	string getTenViTri();
	NhanSu* Clone();

};

class ChuyenVien : public NhanSu {
	vector<string> maDuAnGiaoDuc;
	int namLamViec;
public:
	ChuyenVien();
	ChuyenVien(string hoTen, string ngaySinh, string maSo, vector<string> maDuAnGiaoDuc, int namLamViec);
	ChuyenVien(const ChuyenVien& src);
	~ChuyenVien();
	float tinhLuong();
	void nhapThongTinNhanSu();
	void xuatThongTinNhanSu();
	string getTenViTri();
	NhanSu* Clone();

};

class ThucTapSinh : public NhanSu {
	vector<string> maDuAnNghienCuuDuBi;
	int thoiGianThucTap;
public:
	ThucTapSinh();
	ThucTapSinh(string hoTen, string ngaySinh, string maSo, vector<string> maDuAnGiaoDuc, int namLamViec);
	ThucTapSinh(const ThucTapSinh& src);
	~ThucTapSinh();
	float tinhLuong();
	void nhapThongTinNhanSu();
	void xuatThongTinNhanSu();
	string getTenViTri();
	NhanSu* Clone();
	
};

class PhongQuanLy
{
	static vector<NhanSu*> nhansuMau; 
	vector<NhanSu*> listNhanSu; 
	public: 
	PhongQuanLy();
	static void themNhanSuMau(NhanSu* ns);
	static NhanSu* themNhanSuTheoTenViTri(string tenViTri);
	static void xoaNhanSuMau();
	void xoaNhanSuTheoMaSo(string ID);
};
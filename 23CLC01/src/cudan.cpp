#include "cudan.h"

CuDan:: CuDan()
{
    this->ten = "";
    this->tuoi = 1; 
    this->nghenghiep = "";
    this->khanangSanXuat = 1; 
}
CuDan:: CuDan(string ten, int tuoi, string nghenghiep, int khanangSanXuat)
{
    this->ten = ten; 
    this->tuoi = tuoi; 
    this->nghenghiep = nghenghiep; 
    this->khanangSanXuat = khanangSanXuat; 
}

void CuDan:: vaoCongTrinh(CongTrinh* congtrinh)
{
    if(congtrinh->getLoaiCongTrinh() == "cong trinh dan dung")
    {
        congtrinh->giamThoiGian(5);
        congtrinh->tangTaiNguyen(10);
    }
    else if(congtrinh->getLoaiCongTrinh() == "cong trinh thuong mai")
    {
        congtrinh->giamThoiGian(10);
        congtrinh->tangTaiNguyen(100);
    }
}

void CuDan:: nangcapCuDan()
{
    string nghemoi; 
    getline(cin, nghemoi);
    int khanangsanxuat; 
    cin >> khanangsanxuat;
    this->khanangSanXuat = khanangsanxuat;
}
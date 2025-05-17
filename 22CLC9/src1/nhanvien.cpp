#include "class.h"
using namespace std; 

NhanVien :: NhanVien()
{
    this->hoten = "";
    this->maso = 0;
    this->hsl = 0; 
}

NhanVien:: NhanVien(int maso, string hoten, float hsl)
{
    
    this->tiep = nullptr; 
    this->hoten = hoten; 
    this->maso = maso; 
    this->hsl = hsl; 
}

ostream& operator<<(ostream &os, const NhanVien& nv)
{
    os << nv.maso << " " << nv.hoten << " " << nv.hsl << endl;
    return os; 
}

istream& operator>>(istream &is, NhanVien& nv)
{
    cout << "Nhap ma nha vien: ";
    is >> nv.maso;
    is.ignore();
    cout << "Nhap ten nhan vien: ";
    getline(is, nv.hoten);
    cout << "Nhap he so luong: ";
    is >> nv.hsl; 
    return is; 
}

bool NhanVien:: operator<(const NhanVien &other)
{
    return this->maso < other.maso; 
}

bool NhanVien:: operator>(const NhanVien &other)
{
    return this->maso > other.maso;
}

NhanVien& NhanVien::operator=(const NhanVien &other)
{
    if(this != &other)
    {
        delete tiep;
        this->hoten = other.hoten; 
        this->maso= other.maso; 
        this->hsl = other.hsl;
    }
    return *this; 
}

int NhanVien::getMaSo()
{
    return maso; 
}

string NhanVien::getHoTen()
{
    return hoten; 
}

float NhanVien::getHSL()
{
    return hsl; 
}

NhanVien::~NhanVien()
{
    
}
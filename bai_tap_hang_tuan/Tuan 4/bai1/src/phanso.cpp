#include "phanso.h"

int gcd(int a, int b)
{
    int res = min(a, b);
    while(res > 1)
    {
        if(a % res == 0 && b % res == 0)
            break; 
        res--; 
    }
    return res; 
}

void PhanSo::rutGon()
{
    int UCLN = gcd(*tuso, *mauso);
    *tuso = *tuso / UCLN; 
    *mauso = *mauso / UCLN; 
}

PhanSo:: PhanSo()
{
    this->tuso = new int; 
    this->mauso = new int; 
    *tuso = 0; 
    *mauso = 1;
}

PhanSo:: PhanSo(int tu, int mau)
{
    if(mau == 0)
    {
        tuso = new int(0);
        mauso = new int(1); 
        return;
    }
    tuso = new int; 
    mauso = new int; 
    *tuso = tu; 
    *mauso = mau; 
    rutGon();
}

PhanSo:: PhanSo(int tu)
{
    tuso = new int; 
    mauso = new int; 
    *tuso = tu; 
    *mauso = 1; 
}

PhanSo:: PhanSo(const PhanSo &phanso)
{
    tuso = new int; 
    mauso = new int; 
    *tuso = *phanso.tuso; 
    *mauso = *phanso.mauso; 
    rutGon();
}

int PhanSo:: getTuSo()
{
    return *tuso; 
}

int PhanSo:: getMauSo()
{
    return *mauso; 
}

void PhanSo:: setTuSo(int tu)
{
    *tuso = tu; 
}

void PhanSo:: setMauSo(int mau)
{
    *mauso = mau; 
}

PhanSo& PhanSo:: operator=(const PhanSo& other)
{
    if(this != &other)
    {
        delete this->tuso;
        delete this->mauso; 
        this->tuso = new int(*(other.tuso));
        this->mauso = new int(*(other.mauso));
    }
    return *this; 
}

PhanSo PhanSo:: operator+(const PhanSo& other) const
{
    int tu = *(this->tuso) * *(other.mauso) + *(other.tuso) * *(this->mauso);
    int mau = *(this->mauso) * *(other.mauso);
    PhanSo res(tu, mau);
    return res; 
}

PhanSo PhanSo:: operator-(const PhanSo& other) const
{
    int tu = *(this->tuso) * *(other.mauso) - *(other.tuso) * *(this->mauso);
    int mau = *(this->mauso) * *(other.mauso);
    PhanSo res(tu, mau);
    return res; 
}

PhanSo PhanSo:: operator*(const PhanSo& other) const
{
    int tu = *(this->tuso) * *(other.tuso);
    int mau = *(this->mauso) * *(other.mauso);
    PhanSo res(tu, mau);
    return res; 
}

PhanSo PhanSo:: operator/(const PhanSo& other) const
{
    int tu = *(this->tuso) * *(other.mauso);
    int mau = *(this->mauso) * *(other.tuso);
    PhanSo res(tu, mau);
    return res; 
}

void PhanSo:: input()
{
    cout << "Nhap tu so: ";
    cin >> *this->tuso;
    cout << "Nhap mau so: ";
    cin >> *this->mauso;
    while(*mauso == 0)
    {
        cout << "Mau so khong duoc bang 0 vui long nhap lai!" << endl; 
        cout << "Nhap mau so: ";
        cin >> *this->mauso; 
    }
}

void PhanSo:: display()
{
    cout << *tuso << "/" << *mauso << endl; 
}

void PhanSo:: displayDecimal()
{
    cout << *tuso / *mauso << endl; 
}







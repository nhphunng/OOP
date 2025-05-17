#include "class.h"

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a != b)
    {
        /* code */
        if(a > b)
            a -= b; 
        else
            b -= a; 
    }
    return a; 
}

PhanSo:: PhanSo()
{
    tuso = 0; 
    mauso = 1; 
}

PhanSo :: PhanSo(int tuso, int mauso)
{
    this->tuso = tuso; 
    this->mauso = mauso;
}

PhanSo:: PhanSo(int tuso)
{
    this->tuso = tuso; 
    mauso = 1; 
}

PhanSo :: ~PhanSo()
{

}

PhanSo:: PhanSo(const PhanSo &other)
{
    this->tuso = other.tuso; 
    this->mauso = other.mauso; 
}

void PhanSo:: rutGon()
{
    int n = gcd(this->tuso, this->mauso);
    this->tuso /= n; 
    this->mauso /= n; 
}

PhanSo& PhanSo:: operator=(const PhanSo& other)
{
    if(this != &other)
    {
        this->tuso = other.tuso; 
        this->mauso = other.mauso; 
    }
    return *this; 
}

PhanSo PhanSo:: operator+(const PhanSo& other)
{
    PhanSo phanso;
    phanso.tuso = this->tuso * other.mauso + other.tuso * this->mauso;
    phanso.mauso = this->mauso * other.mauso; 
    phanso.rutGon();
    return phanso; 
}

PhanSo PhanSo:: operator-(const PhanSo& other)
{
    PhanSo ketqua; 
    ketqua.tuso = this->tuso * other.mauso - other.tuso * this->mauso; 
    ketqua.mauso = this->mauso * other.mauso; 
    ketqua.rutGon();
    return ketqua; 
}

PhanSo PhanSo:: operator*(const PhanSo& other)
{
    PhanSo ketqua; 
    ketqua.tuso = this->tuso * other.tuso; 
    ketqua.mauso = this->mauso * other.mauso; 
    ketqua.rutGon();
    return ketqua; 
}

PhanSo PhanSo:: operator/(const PhanSo& other)
{
    PhanSo ketqua; 
    ketqua.tuso = this->tuso * other.mauso; 
    ketqua.mauso = this->mauso * other.tuso; 
    ketqua.rutGon();
    return ketqua; 
}

PhanSo& PhanSo:: operator+=(const PhanSo& other)
{
    this->tuso = this->tuso * other.mauso + other.tuso * this->mauso; 
    this->mauso = this->mauso * other.mauso; 
    this->rutGon();
    return *this; 
}

PhanSo& PhanSo:: operator-=(const PhanSo& other)
{
    this->tuso = this->tuso * other.mauso - other.tuso * this->mauso;
    this->mauso = this->mauso * other.mauso; 
    this->rutGon();
    return *this; 
}

PhanSo& PhanSo:: operator*=(const PhanSo& other)
{
    this->tuso = this->tuso * other.tuso; 
    this->mauso = this->mauso * other.mauso; 
    this->rutGon();
    return *this; 
}

PhanSo& PhanSo:: operator/=(const PhanSo& other)
{
    this->tuso = this->tuso * other.mauso; 
    this->mauso = this->mauso * other.tuso; 
    this->rutGon();
    return *this; 
}

bool PhanSo:: operator==(const PhanSo& other)
{
    return (this->tuso == other.tuso) && (this->mauso == other.mauso);
}

bool PhanSo:: operator>(const PhanSo& other)
{
    PhanSo check = *this - other;
    if(check.tuso > 0 && check.mauso > 0)
        return true; 
    else if(check.tuso < 0 && check.mauso < 0)
        return true; 
    return false; 
}

bool PhanSo:: operator<(const PhanSo& other)
{
    PhanSo check = *this - other; 
    if(check.tuso > 0 && check.mauso > 0)
        return false; 
    else if(check.tuso < 0 && check.mauso < 0)
        return false; 
    return true; 
}

bool PhanSo:: operator>=(const PhanSo& other)
{
    PhanSo check = *this - other;
    if(check.tuso >= 0 && check.mauso >= 0)
        return true; 
    else if(check.tuso <= 0 && check.mauso <= 0)
        return true; 
    return false; 
}

bool PhanSo:: operator<=(const PhanSo& other)
{
    PhanSo check = *this - other; 
    if(check.tuso >= 0 && check.mauso >= 0)
        return false; 
    else if(check.tuso <= 0 && check.mauso <= 0)
        return false; 
    return true; 
}

bool PhanSo:: operator!=(const PhanSo& other)
{
    return (this->tuso != other.tuso) && (this->mauso != other.mauso);
}

PhanSo PhanSo:: operator++(int)
{
    PhanSo result(*this);
    result.tuso = result.tuso + result.mauso; 
    return result; 
}

PhanSo& PhanSo:: operator++()
{
    this->tuso = this->tuso + this->mauso; 
    return *this; 
}

ostream& operator<<(ostream& out, const PhanSo &phanso)
{
    out << phanso.tuso << "/" << phanso.mauso; 
    return out; 
}

istream& operator>>(istream& in, PhanSo &phanso)
{
    in >> phanso.tuso; 
    do
    {
        /* code */
        in >> phanso.mauso; 
        if(phanso.mauso != 0)
            break; 
        else
            cout << "Mau so khong duoc bang 0. Vui long nhap lai\n";
    } while (true);
    return in; 
}

PhanSo operator+(const PhanSo& other, int n)
{
    PhanSo result(other); 
    result.tuso = result.tuso + n * result.mauso; 
    result.rutGon();
    return result; 
}

PhanSo operator+(int n, const PhanSo& other)
{
    PhanSo result(other);
    result.tuso = result.tuso + n * result.mauso; 
    result.rutGon();
    return result; 
}

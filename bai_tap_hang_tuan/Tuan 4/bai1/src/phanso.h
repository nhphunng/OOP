#ifndef PHANSO_H
#define PHANSO_H
#include <iostream>
#include <math.h>
#include <numeric>
using namespace std; 
class PhanSo
{
    private:
        int *tuso; 
        int *mauso;
    public:
        void rutGon();
        PhanSo();
        PhanSo(int tu, int mau);
        PhanSo(int tu);
        PhanSo(const PhanSo &phanso);
        int getTuSo();
        int getMauSo();
        void setTuSo(int tu);
        void setMauSo(int mau);
        PhanSo& operator=(const PhanSo& other);
        PhanSo operator+(const PhanSo& other) const;
        PhanSo operator-(const PhanSo& other) const;
        PhanSo operator*(const PhanSo& other) const;
        PhanSo operator/(const PhanSo& other) const;
        void input();
        void display();
        void displayDecimal();
};
int gcd();
#endif
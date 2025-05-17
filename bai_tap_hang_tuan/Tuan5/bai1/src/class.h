#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <math.h>
using namespace std; 


class PhanSo
{
    int tuso; 
    int mauso; 
    public:
        PhanSo();
        PhanSo(int tuso, int mauso);
        PhanSo(int tuso);
        ~PhanSo();
        PhanSo(const PhanSo &other);
        void rutGon();
        PhanSo& operator=(const PhanSo& other);
        PhanSo operator+(const PhanSo& other); 
        PhanSo operator-(const PhanSo& other);
        PhanSo operator*(const PhanSo& other); 
        PhanSo operator/(const PhanSo& other);
        PhanSo& operator+=(const PhanSo& other);
        PhanSo& operator-=(const PhanSo& other);
        PhanSo& operator*=(const PhanSo& other);
        PhanSo& operator/=(const PhanSo& other);
        bool operator==(const PhanSo& other);
        bool operator>(const PhanSo& other);
        bool operator<(const PhanSo& other);
        bool operator>=(const PhanSo& other);
        bool operator<=(const PhanSo& other);
        bool operator!=(const PhanSo& other);
        PhanSo operator++(int);
        PhanSo& operator++();
        friend ostream& operator<<(ostream& out, const PhanSo &phanso);
        friend istream& operator>>(istream& in, PhanSo &phanso);
        friend PhanSo operator+(const PhanSo& other, int n);
        friend PhanSo operator+(int n, const PhanSo& other);



};
#endif
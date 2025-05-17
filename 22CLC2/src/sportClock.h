#ifndef SPORTCLOCK_H
#define SPORTCLOCK_H
#include <iostream>
#include <math.h>
#include <sstream>
#include <string>
using namespace std; 

class DongHoTheThao
{
    private: 
        int phut, giay, phantramGiay;
    public:
        DongHoTheThao();
        DongHoTheThao(int phut, int giay, int phantramGiay);
        DongHoTheThao(int giay, int phantramGiay);
        DongHoTheThao(int phantramGiay);
        DongHoTheThao(string s);
        void display();
        string toFormat() const;
        DongHoTheThao operator+(const DongHoTheThao &other);
        DongHoTheThao operator+(int phanTramGiay);
        friend DongHoTheThao operator+(int phantramGiay, const DongHoTheThao& DHTT);
        DongHoTheThao& operator++(); //prefix
        DongHoTheThao& operator=(const DongHoTheThao& other);
        DongHoTheThao operator++(int x);//posfix
        int totalPTG();
        friend ostream& operator<<(ostream &out, const DongHoTheThao& DHTT);
        ~DongHoTheThao();
};
#endif
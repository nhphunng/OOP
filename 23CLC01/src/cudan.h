#ifndef CUDAN_H
#define CUDAN_H

#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
#include "congtrinh.h"
using namespace std; 

class CongTrinh; 

class CuDan 
{
    string ten; 
    int tuoi; 
    string nghenghiep; 
    int khanangSanXuat;
    public: 
        CuDan();
        CuDan(string ten, int tuoi, string nghenghiep, int khanangSanXuat);
        void vaoCongTrinh(CongTrinh* congtrinh);
        void nangcapCuDan();
};

#endif
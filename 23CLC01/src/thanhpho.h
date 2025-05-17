#ifndef THANHPHO_H
#define THANHPHO_H
#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
using namespace std; 

class ThanhPho
{
    int **matrix; 
    int n, m; 
    public: 
        ThanhPho();
        ThanhPho(int n, int m);
        int getN();
        int getM();
        int getPoint(int x, int y);
        void setPoint(int x, int y);
        int getsize();
        void delPoint(int x, int y);
        ~ThanhPho();
};

#endif








#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std; 

class NhanVien
{
    private: 
        int maso; 
        string hoten; 
        float hsl; 
    public: 
        NhanVien* tiep; 
        NhanVien();
        NhanVien(int maso, string hoten, float hsl);
        friend ostream& operator<<(ostream &os,const NhanVien& nv);
        friend istream& operator>>(istream &is, NhanVien& nv);
        bool operator>(const NhanVien& other);
        bool operator<(const NhanVien&other);
        NhanVien& operator=(const NhanVien& other);
        int getMaSo();
        string getHoTen();
        float getHSL();
        ~NhanVien();
};

class QuanLy
{
    private: 
        NhanVien *dau; 
    public: 
        QuanLy();
        void sortList();
        void delNhanVien(int maso);
        void displayList();
        void addNhanVien(NhanVien nv);
        ~QuanLy();
};

#endif

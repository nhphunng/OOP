#include "bai1.h"

PhongQuanLy::PhongQuanLy(){}

void PhongQuanLy::themNhanSuMau(NhanSu* ns)
{
    if(ns == NULL)  return; 
    int pos = -1; 
    for(int i = 0; i < nhansuMau.size(); i++)
    {
        NhanSu *mau = nhansuMau[i];
        if(mau->getTenNhanSu() == nhansuMau[i]->getTenNhanSu())
            pos = i; 
    }
    if(pos == -1) nhansuMau.push_back(ns);
}

NhanSu* PhongQuanLy::themNhanSuTheoTenViTri(string tenViTri)
{
    for(int i = 0; i < nhansuMau.size(); i++)
    {
        NhanSu *mau = nhansuMau[i];
        if(mau[i].getTenViTri() == tenViTri)
        {
            return nhansuMau[i]->Clone();
        }
    }
    cout << "Khong tim thay ten vi tri hop le \n";
    return NULL; 
}

void PhongQuanLy::xoaNhanSuMau()
{
    for(int i = 0; i < nhansuMau.size(); i++)
    {
        delete nhansuMau[i];
    }
    nhansuMau.clear();
}

void PhongQuanLy::xoaNhanSuTheoMaSo(string ID)
{
    int prevSize = listNhanSu.size();   
    for(int i = 0; i < listNhanSu.size(); i++)
    {
        if(ID == listNhanSu[i]->getMaSo())
        {
            listNhanSu.erase(listNhanSu.begin() + i);
            cout << "Xoa thanh cong \n";
            break; 
        }
    }
    if(prevSize == listNhanSu.size())
    {
        cout << "Xoa khong thanh cong \n";
    }
}



#include "class.h"

QuanLy::QuanLy()
{
    dau = new NhanVien();
}

void QuanLy:: sortList()
{
   if(dau == nullptr || dau->tiep == nullptr)
    return; 
    bool swapped; 
    do
    {
        swapped = false; 
        NhanVien *prev = NULL; 
        NhanVien *cur = this->dau;

        while(cur->tiep != nullptr)
        {
            if(cur->getMaSo() > cur->tiep->getMaSo())
            {
                NhanVien *next = cur->tiep; 

                cur->tiep = next->tiep; 
                next->tiep = cur; 
                if(prev == nullptr)
                {
                    dau = next; 
                }
                else 
                {
                    prev->tiep = next; 
                }
                prev = next; 
                swapped = true; 
            }
            else 
            {
                prev = cur; 
                cur = cur->tiep; 
            }
        }
    }
    while(swapped);
}

void QuanLy:: delNhanVien(int maso)
{
    if(dau == nullptr)
        return; 
    if(dau->getMaSo() == maso)
    {
        NhanVien *tmp = dau; 
        dau = dau->tiep; 
        delete tmp; 
        cout << "Xoa thanh cong]\n";
        return; 
    }
    NhanVien *pre = dau; 
    NhanVien *cur = dau->tiep; 
    while(cur != nullptr)
    {
        if(cur->getMaSo() == maso)
        {
            pre->tiep = cur->tiep; 
            NhanVien *tmp = cur; 
            cur = nullptr; 
            delete tmp; 
            cout << "Xoa thanh cong" << endl; 
            return; 
        }
        pre = cur; 
        cur = cur->tiep; 
    }
    cout << "Khong tim thay ma so \n";
    return; 
}

void QuanLy :: displayList()
{
    NhanVien *cur = dau; 
    while(cur != nullptr)
    {
        cout << cur->getMaSo() << " " << cur->getHoTen() << " " << cur->getHSL() << endl; 
        cur = cur->tiep; 
    }
}

void QuanLy:: addNhanVien(NhanVien nv)
{
    NhanVien *newNhanVien = new NhanVien(nv);
    if(dau->getHoTen() == "" && dau->getMaSo() == 0 && dau->getHSL() == 0)
        dau = newNhanVien; 
    else
    {
        NhanVien *cur = dau; 
        while(cur->tiep != nullptr)
        {
            cur = cur->tiep; 
        }
        cur->tiep = newNhanVien; 
    }
}

QuanLy::~QuanLy()
{
    delete[] dau; 
}

#include "class.h"

MangDHTT:: MangDHTT()
{
    mangDongHo.empty();
}

void MangDHTT:: ThemDHTT(DongHoTheThao *dongho)
{
    mangDongHo.push_back(dongho);
}

ostream& operator<<(ostream& out, const MangDHTT& src)
{
    for(auto it : src.mangDongHo)
    {
        cout << *it << ";"; 
    }
    return out; 
}

DongHoTheThao*& MangDHTT:: operator[](int n)
{
   return mangDongHo[n];
}

DongHoTheThao* MangDHTT:: DHTTLonNhat()
{
     
    int index = 0; 
    for(int i = 1; i < mangDongHo.size(); i++)
    {
        if(mangDongHo[index]->totalPTG() < mangDongHo[i]->totalPTG())
        {
            index = i; 
        }
    }
    return mangDongHo[index];
}

MangDHTT::~MangDHTT()
{
    for(int i = 0; i < mangDongHo.size(); i++)
    {
        delete mangDongHo[i];
        mangDongHo.erase(mangDongHo.begin() + i);
    }
    mangDongHo.clear();
}

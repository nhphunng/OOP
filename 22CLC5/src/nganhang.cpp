#include "class.h"

NganHang:: NganHang(string name, string diachi)
{
    this->ten = ten; 
    this->diachi = diachi; 
}

bool cmp(TK a, TK b)
{
    return a.getSDTK() > b.getSDTK(); 
}

void NganHang :: sortNganHang()
{
    sort(list.begin(), list.end(), cmp);
    for(auto it : list)
    {
        it.displayTK();
    }
}

long long NganHang:: tongTien()
{
    long long result = 0; 
    for(auto it : list)
    {
        result+= it.getSDTK();
    }
    return result; 
}


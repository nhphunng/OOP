#include"class.h"

void DSCayTrong:: capNhatThoiGian()
{
    for(auto it: list)
    {
        int time; 
        cout << "Nhap thoi gian thu hoach moi cho cay: ";
        cin >> time; 
        it->capnhatTGTH(time);
    }
}
void DSCayTrong:: addCayvaoDanhsach(CayTrong* cay)
{
    for (auto it : list) {
        if (it == cay) return; // Avoid duplicates
    }
    list.push_back(cay);
}

void DSCayTrong:: xoaCaykhoiDanhsach(CayTrong* cay)
{
    for(int i = 0; i < list.size(); i++)
    {
        if((list[i]->getX() == cay->getX()) && (list[i]->getY() == cay->getY()))
        {
            delete list[i];
            list.erase(list.begin() + i);
            return; 
        }
    }
}

DSCayTrong::~DSCayTrong()
{
    for(auto it : this->list)
    {
        delete it; 
    }
    list.clear();
}
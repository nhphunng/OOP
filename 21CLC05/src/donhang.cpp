#include "class.h"

float DonHang::total()
{
    float result = 0; 
    for(auto it: ly)
    {
        result += it->getPrice();
    }
    return result; 
}

void DonHang :: addLy(LyNuocTuyBien lynuoctuybien)
{
    LyNuocTuyBien *newLy = new LyNuocTuyBien(lynuoctuybien); 
    this->ly.push_back(newLy);
}

void DonHang:: delLy(string delName)
{
    int index = 0; 
    for(; index < this->ly.size(); index++)
    {
        if(this->ly[index]->getName() == delName)
        {
            delete this->ly[index];
            this->ly.erase(this->ly.begin() + index);
            return; 
        }
    }
}

float DonHang:: operator-(float heso)
{
    float result = this->total() - this->total()*heso; 
    return result; 
}

DonHang:: ~DonHang() {
    for (auto it : ly) {
        delete it;
    }
}
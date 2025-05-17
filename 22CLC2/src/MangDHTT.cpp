#include "MangDHTT.h"

void MangDHTT::ThemDHTT(DongHoTheThao *DH)
{
    //DH->display();
    this->DHList.push_back(DH);
}
void MangDHTT:: ThemDHTT(DongHoTheThao DH)
{
    DongHoTheThao *dongho = new DongHoTheThao(DH); 
    this->DHList.push_back(dongho);
}

DongHoTheThao*& MangDHTT::operator[](int index)
{
    return this->DHList[index];
}
ostream& operator<<(ostream &os, const MangDHTT& mdhtt)
{
    for(auto dh : mdhtt.DHList)
    {
        os << dh->toFormat() << endl; 
    }
    return os; 
}
MangDHTT :: ~MangDHTT()
{
    for(auto dh : this->DHList)
        delete dh; 
}



DongHoTheThao MangDHTT::DHTTLonNhat()
{
    DongHoTheThao result = *this->DHList[0]; 
    for(int i = 1; i < this->DHList.size(); i++)
    {
        if(result.totalPTG() < DHList[i]->totalPTG())
            result = *DHList[i];
    }
    return result; 
}







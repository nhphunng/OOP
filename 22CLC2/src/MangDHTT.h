#ifndef MANGDHTT_H
#define MANGDHTT_H
#include <iostream>
#include <vector>
#include "sportClock.h"
using namespace std; 
class MangDHTT : public DongHoTheThao
{
    private:
        vector<DongHoTheThao*> DHList; 
    public: 
        ~MangDHTT();
        DongHoTheThao*& operator[](int index);
        friend ostream& operator<<(ostream& os, const MangDHTT& mdhtt);
        void ThemDHTT(DongHoTheThao *DH);
        void ThemDHTT(DongHoTheThao DH);
        DongHoTheThao DHTTLonNhat();
        //friend ostream& operator<<(ostream &out, const DongHoTheThao& DHTT);
        
};
#endif
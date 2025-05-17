#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string> 
#include <vector>
#include <cctype>
#include "congtrinh.h"
using namespace std; 

class CongTrinh;

class Player 
{
    int capdo; 
    float vang; 
    int nangluong; 
    vector<CongTrinh*> dsCongTrinh; 
    public:
        Player();
        Player(int level, float tainguyen, int nangluong);
        bool truNangLuong();
        void congTaiNguyen(float giatri);
        void themCongTrinh(CongTrinh *congtrinh);
        void xoaCongTrinh(CongTrinh *congtrinh);
        void capnhatThoiGian(int minutes);
        void displayNguoiChoi();
        float getVang();
        void traodoiCongTrinh(Player &other,CongTrinh *CongTrinhTraoDoi, float tainguyenYeuCau);
        ~Player();
};

#endif
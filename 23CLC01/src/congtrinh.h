#ifndef CONGTRINH_H
#define CONGTRINH_H

#include <iostream>
#include <string> 
#include "thanhpho.h"
#include "player.h"
using namespace std; 

class Player;
class ThanhPho;

class CongTrinh
{
    string tenCongTrinh; 
    string loaiCongTrinh; 
    float chiphi; 
    float thoigianht; 
    int capdo; 
    float tainguyen; 
    float thoigiansanxuat; 
    float thoigiansanxuatconlai; 
    int x, y; 
    public: 
        CongTrinh();
        CongTrinh(string tenCongTrinh, string loaiCongTrinh, float chiphi, float thoigianht, int capdo, float tainguyen, float thoigiansanxuat);
        CongTrinh(const CongTrinh& other);
        ~CongTrinh();
        friend istream& operator>>(istream& in, CongTrinh& other);
        friend ostream& operator<<(ostream& out, const CongTrinh& other);
        void xayDungCongTrinh(ThanhPho& city, Player& player, int x, int y);
        void capnhatThoiGianCongTrinh(float thoigianht, float thoigiansx);
        void nangcapCongTrinh(Player& player);
        void phuongthucThuHoach(ThanhPho& city, Player& player);
        string getLoaiCongTrinh();
        float giamThoiGian(float time);
        float tangTaiNguyen(float gold);
        void phahuyCongTrinh(ThanhPho& thanhpho, Player& player);
};

#endif
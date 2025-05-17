#include "player.h"

Player::Player()
{
    capdo = 1; 
    vang = 0; 
    nangluong = 0; 
}

Player::Player(int capdo, float vang, int nangluong)
{
    this->capdo = capdo; 
    this->vang = vang; 
    this->nangluong = nangluong;
    for(auto it: this->dsCongTrinh)
    {
        cout << *it << endl; 
    } 
}

bool Player:: truNangLuong()
{
    if(nangluong > 0)
    {
        this->nangluong -= 1; 
        return true; 
    }
    else 
        cout << "Nang luong cua nguoi choi khong du \n";
    return false; 
}

void Player:: congTaiNguyen(float giatri)
{
    this->vang += giatri; 
}

void Player:: themCongTrinh(CongTrinh* congtrinh)
{
    dsCongTrinh.push_back(congtrinh);
}

void Player:: xoaCongTrinh(CongTrinh* congtrinh)
{ 
    for(int i = 0; i < this->dsCongTrinh.size(); ++i)
    {
        if(dsCongTrinh[i] == congtrinh)
        {
            dsCongTrinh.erase(dsCongTrinh.begin() + i); 
            return; 
        }
    }
}

void Player:: capnhatThoiGian(int minutes)
{
    float thoigian;
    for(auto it : dsCongTrinh)
    {
        int thoigianht; 
        int thoigiansx; 
        cin >> thoigianht;
        cin >> thoigiansx;
        it->capnhatThoiGianCongTrinh(thoigianht, thoigiansx);
    }
}

void Player:: displayNguoiChoi()
{
    cout << this->capdo << endl; 
    cout << this->nangluong << endl; 
    cout << this->vang << endl;
    for(auto it : this->dsCongTrinh)
    {
        cout << *it << endl; 
    }
}

float Player:: getVang()
{
    return this->vang; 
}

void Player:: traodoiCongTrinh(Player &other,CongTrinh *CongTrinhTraoDoi, float tainguyenYeuCau)
{
    if(this->vang < tainguyenYeuCau)
    {
        cout << "Khong du tai nguyen de trao doi \n";
        return; 
    }
    CongTrinh *congtrinh; 
    for(int i = 0; i < this->dsCongTrinh.size(); i++)
    {
        if(dsCongTrinh[i] == CongTrinhTraoDoi)
        {
            this->xoaCongTrinh(dsCongTrinh[i]);
            other.themCongTrinh(dsCongTrinh[i]);
        }
    }
}

Player:: ~Player()
{
    dsCongTrinh.clear();
}


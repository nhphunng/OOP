#include "class.h"

Player::Player()
{
    level = 1; 
    tainguyen = 0; 
    nangluong = 0; 
}

Player::Player(int level, float tainguyen, int nangluong)
{
    this->level = level; 
    this->tainguyen = tainguyen; 
    this->nangluong = nangluong; 
    this->listCayTrong = listCayTrong;
    this->listVatNuoi = listVatNuoi;
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
    this->tainguyen += giatri; 
}

void Player:: themCay(CayTrong *cay)
{
    listCayTrong.push_back(cay);
}

void Player:: xoaCay(CayTrong *cay)
{
    for(int i = 0; i < this->listCayTrong.size(); i++)
    {
        if(listCayTrong[i] == cay)
        {
            break; 
            delete listCayTrong[i];
            listCayTrong.erase(listCayTrong.begin() + i);
        }
    }
}

void Player:: capnhatThoiGian()
{
    float thoigian;
    for(auto it : listCayTrong)
    {
        cin >> thoigian; 
        this->capnhatThoiGianThuHoach(thoigian);
    }
}

void Player:: themVatNuoi(VatNuoi *vatnuoi)
{
    listVatNuoi.push_back(vatnuoi);
}   

void Player:: xoaVatNuoi(VatNuoi *vatnuoi)
{
    for(int i = 0; i < this->listVatNuoi.size(); i++)
    {
        if(listVatNuoi[i] == vatnuoi)
        {
            break; 
            delete this->listVatNuoi[i];
            listVatNuoi.erase(listVatNuoi.begin() + i);
        }
    }
}
void Player:: displayTaiNguyen()
{
    cout << this->tainguyen << endl;
}

Player::~Player()
{
    listCayTrong.clear();
    listVatNuoi.clear();
}


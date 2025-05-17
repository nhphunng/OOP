#include "class.h"

CayTrong:: CayTrong()
{
    this->ten = "";
    loaiCay = "1"; 
    SP = 1; 
    SL = 1; 
    TGTH = 60; 
    x = -1; 
    y = -1;
}

CayTrong::CayTrong(string ten, string loaiCay, float GHG, float SP, float SL, float TGTH)
{
    this->ten = ten; 
    if(loaiCay == "cay cong nghiep" || loaiCay == "cay an trai")
    {
        this->loaiCay = loaiCay; 
    }
    else 
        loaiCay = "1";
    this->GHG = GHG; 
    this->SP = SP; 
    this->SL = SL; 
    this->TGTH = TGTH; 
    x = -1; 
    y = -1; 
}
CayTrong::CayTrong(string ten, string loaiCay, float GHG, float SP)
{
    this->ten = ten; 
    if(loaiCay == "cay cong nghiep" || loaiCay == "cay an trai")
    {
        this->loaiCay = loaiCay; 
    }
    else 
        loaiCay = "1";
    this->GHG = GHG; 
    this->SP = SP; 
    this->SL = 1; 
    this->TGTH = 60; 
    x = -1;
    y = -1; 
}
CayTrong::CayTrong(const CayTrong& other)
{
    this->ten = other.ten; 
    this->loaiCay = other.loaiCay; 
    this->GHG = other.GHG; 
    this->SP = other.SP; 
    this->SL = other.SL; 
    this->TGTH = other.TGTH; 
    this->x = other.x; 
    this->y = other.y; 
}

CayTrong:: ~CayTrong()
{

}

bool CayTrong:: operator<(const CayTrong& other)
{
    return this->SP < other.SP; 
}

bool CayTrong:: operator>(const CayTrong& other)
{
    return this->SP > other.SP; 
}


ostream& operator<<(ostream &out, const CayTrong &cay)
{
    out << cay.ten << endl; 
    out << cay.loaiCay << endl; 
    out << cay.GHG << endl; 
    out << cay.SP << endl; 
    out << cay.SL << endl; 
    out << cay.TGTH << endl; 
    return out; 
}

istream& operator>>(istream &in, CayTrong & cay)
{
    getline(in, cay.ten);
    bool check = false;
    while(!check)
    {
        cout << "Nhap loai cay trong(cay an qua hoac cay cong nghiep): ";
        getline(in, cay.loaiCay);
        if((cay.loaiCay == "cay an qua") || (cay.loaiCay == "cay cong nghiep"))
        {
            check = true; 
        }
        else 
        {
            cout << "Vui long nhap lai\n";
        }
    }
    in >> cay.GHG; 
    in >> cay.SP; 
    in >> cay.SL; 
    in >> cay.TGTH; 
    return in; 
}
void CayTrong::giamThoiGian()
{
    if(this->TGTH >= 5)
        this->TGTH -= 5; 
    else 
        this->TGTH = 0; 
}

float CayTrong::getSP()
{
    return this->SP; 
}

void CayTrong:: PTTC(int x, int y)
{
    bool check = this->themViTri(x, y);
    if(check == true)
    {
        this->x = x; 
        this->y = y; 
    }
    else 
    {
        this->x = -1; 
        this->y = -1; 
    }
}
int CayTrong:: getX() const
{
    return x; 
}
int CayTrong:: getY() const
{
    return y;
}
void CayTrong::capnhatTGTH(int TGTH)
{
    this->TGTH = TGTH; 
}
float CayTrong::getTGTH()
{
    return this->TGTH;
}
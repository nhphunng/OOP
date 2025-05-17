#include "class.h"

CayTrong::CayTrong()
{
    this->name = "1";
    this->loaicay = "1";
    this->ghg = 1; 
    sp = 1; 
    sl = 1; 
    tgth = 60; 
    x = -1; 
    y = -1; 
}

CayTrong :: CayTrong(string name, string loaicay, float ghg, float sp, float sl, float tgth)
{
    this->name = name; 
    this->loaicay = loaicay; 
    this->ghg = ghg; 
    this->sp = sp; 
    this->sl = sl; 
    this->tgth = tgth; 
    x = -1; 
    y = - 1; 
}

CayTrong:: CayTrong(string name, string loaicay, float ghg, float sp)
{
    this->name = name; 
    this->loaicay = loaicay; 
    this->ghg = ghg; 
    this->sp = sp; 
    this->sl = 1;
    this->tgth = 60; 
    x = -1; 
    y = -1; 
}

CayTrong:: CayTrong(const CayTrong& other)
{
    this->name = other.name;
    this->loaicay = other.loaicay; 
    this->ghg = other.ghg;
    this->sp = other.sp;
    this->sl = other.sl; 
    this->tgth = other.tgth; 
    this->x = -1; 
    this->y = 1; 
}

CayTrong& CayTrong:: operator=(const CayTrong& other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->loaicay = other.loaicay; 
        this->ghg = other.ghg;
        this->sp = other.sp;
        this->sl = other.sl; 
        this->tgth = other.tgth;
        this->x = -1; 
        this->y = -1; 
    }
    return *this; 
}

CayTrong :: ~CayTrong()
{
}

bool CayTrong:: operator>(const CayTrong& other)
{
    return this->sp*this->sl > other.sp*this->sl; 
}

istream& operator>>(istream& in, CayTrong& src)
{
    getline(in, src.name);
    while(true)
    {
        cout << "Nhap loai cay: "; 
        getline(in, src.loaicay);
        if(src.loaicay == "cay an trai" ||src.loaicay == "cay cong nghiep")
            break; 
        else 
            cout << "loai cay khong hop le" << endl; 
    }
    in >> src.ghg; 
    in >> src.sp; 
    in >> src.sl; 
    in >> src.tgth; 
    in >> src.x; 
    in >> src.y; 
    return in; 
}

ostream& operator<<(ostream &out,const CayTrong& src)
{
    out << src.name << " ";
    out << src.loaicay << " ";
    out << src.ghg << " ";
    out << src.sp << " " << src.sl << " " << src.tgth;
    out << src.x << " " << src.y << endl;  
    return out; 
}

void CayTrong:: PTTC(TrangTrai &farm, Player &player, int x, int y)
{   
    if(x > farm.getN() || y > farm.getM())
        return; 
    if(farm.getPoint(x, y) != 0)
    {
        cout << "Vi tri khong hop le \n";
        return; 
    }
    this->x = x; 
    this->y = y; 
    farm.setPoint(x, y);
    player.themCay(this);
}

void CayTrong:: PTTN(Player &player)
{
    if(player.truNangLuong())
    {
         if(this->tgth >= 5)
        tgth -= 5; 
        else 
            tgth = 0; 
    }
}

void CayTrong:: PTTH(TrangTrai &farm, Player &player)
{
    if(this->tgth > 0)
    {
        cout << "Chua den thoi gian thu hoach \n";
        return;
    }
    player.congTaiNguyen(this->sp*this->sl);
    this->delPoint(this->x, this->y);
    player.xoaCay(this);
}

void CayTrong:: capnhatThoiGianThuHoach(float thoiGian)
{
    this->tgth = thoiGian; 
}


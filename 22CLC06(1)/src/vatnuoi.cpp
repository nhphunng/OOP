#include "class.h"

VatNuoi::VatNuoi()
{
    this->name = "1";
    sp = 1; 
    sl = 1; 
    tgth = 60; 
    x = -1; 
    y = -1; 
}

VatNuoi :: VatNuoi(string name, float sp, float sl, float tgth)
{
    this->name = name; 
    this->sp = sp; 
    this->sl = sl; 
    this->tgth = tgth; 
    x = -1; 
    y = - 1; 
}

VatNuoi:: VatNuoi(string name, float sp)
{
    this->name = name; 
    this->sp = sp; 
    this->sl = 1;
    this->tgth = 60; 
    x = -1; 
    y = -1; 
}

VatNuoi:: VatNuoi(const VatNuoi& other)
{
    this->name = other.name;
    this->sp = other.sp;
    this->sl = other.sl; 
    this->tgth = other.tgth; 
    this->x = -1; 
    this->y = 1; 
}

VatNuoi& VatNuoi:: operator=(const VatNuoi& other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->sp = other.sp;
        this->sl = other.sl; 
        this->tgth = other.tgth;
        this->x = -1; 
        this->y = -1; 
    }
    return *this; 
}

VatNuoi :: ~VatNuoi()
{ 
}

bool VatNuoi:: operator>(const VatNuoi& other)
{
    return this->sp*this->sl > other.sp*this->sl; 
}

istream& operator>>(istream& in, VatNuoi& src)
{
    getline(in, src.name);
    in >> src.sp; 
    in >> src.sl; 
    in >> src.tgth; 
    in >> src.x; 
    in >> src.y; 
    return in; 
}

ostream& operator<<(ostream &out,const VatNuoi& src)
{
    out << src.name << " ";
    out << src.sp << " " << src.sl << " " << src.tgth;
    out << src.x << " " << src.y << endl;  
    return out; 
}

void VatNuoi:: phuongthucNuoi(TrangTrai &farm, Player &player, int x, int y)
{
    if(farm.getPoint(x, y) != 0)
    {
        cout << "Vi tri khong hop le \n";
        return; 
    }
    this->x = x; 
    this->y = y; 
    farm.setPoint(x, y);
}

void VatNuoi:: phuongthucChoAn(Player &player)
{
    if(player.truNangLuong())
    {
         if(this->tgth >= 5)
        tgth -= 5; 
        else 
            tgth = 0; 
    }
}

void VatNuoi:: phuongthucThuHoach(TrangTrai &farm, Player &player)
{
    if(this->tgth > 0)
    {
        cout << "Chua den thoi gian thu hoach \n";
        return;
    }
    player.congTaiNguyen(this->sp*this->sl);
    this->delPoint(this->x, this->y);

}

void VatNuoi:: capnhatThoiGianThuHoach(float thoiGian)
{
    this->tgth = thoiGian; 
}


#include "class.h"

VatNuoi:: VatNuoi()
{
    ten = "";
    SP = 1; 
    SL = 1; 
    TGTH = 60; 
    x = -1; 
    y = -1; 
}

VatNuoi :: VatNuoi(string ten, float SP, float SL, float TGTH)
{
    this->ten = ten; 
    this->SP = SP; 
    this->SL = SL; 
    this->TGTH = TGTH; 
    x = -1; 
    y = -1; 
}

VatNuoi:: VatNuoi(string ten, float SP)
{
    this->ten = ten; 
    this->SP = SP; 
    this->SL = 1; 
    this->TGTH = 60; 
    x = -1;
    y = -1;
}

VatNuoi:: VatNuoi(const VatNuoi& other)
{
    this->ten = other.ten; 
    this->SP = other.SP; 
    this->SL = other.SL; 
    this->TGTH = other.TGTH; 
    this->x = other.x; 
    this->y = other.y; 
}

VatNuoi:: ~VatNuoi()
{

}

ostream& operator<<(ostream &out, const VatNuoi &cay)
{
    out << cay.ten << endl; 
    out << cay.SP << endl; 
    out << cay.SL << endl; 
    out << cay.TGTH << endl; 
    return out; 
}

istream& operator>>(istream &in, VatNuoi & cay)
{
    getline(in, cay.ten);
    in >> cay.SP; 
    in >> cay.SL; 
    in >> cay.TGTH; 
    return in; 
}

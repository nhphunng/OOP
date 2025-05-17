#include "class.h"

TK :: TK(int CCCD, string hoten, float SDTK)
{
    this->CCCD = CCCD; 
    this->hoten = hoten; 
    this->SDTK = SDTK; 
}

float TK :: napTien(float sotien)
{
    this->SDTK += sotien;
    return sotien;
}

float TK :: rutTien(float sotien)
{
    if(sotien > SDTK)
    {
        cout << "SDTK khong du \n";
        return; 
    }
    this->SDTK -= sotien; 
    
}

void TK:: kiemTra()
{
    cout << SDTK; 
}

TK& TK:: operator=(const TK& other)
{
    if(this != &other)
    {
        this->CCCD = other.CCCD; 
        this->hoten = other.hoten; 
        this->SDTK = other.SDTK; 
    }
}

bool TK:: operator<(const TK & other)
{
    return this->SDTK < other.SDTK; 
}

bool TK:: operator>(const TK & other)
{
    return this->SDTK > other.SDTK; 
}

bool TK:: operator>=(const TK & other)
{
    return this->SDTK >= other.SDTK; 
}

bool TK:: operator<=(const TK & other)
{
    return this->SDTK <= other.SDTK; 
}

void TK:: displayTK()
{
    cout << "CCCD: "<< CCCD << endl;
    cout << "Ho ten chu tai khoan: " << hoten << endl; 
    cout << "SDTK: "<< SDTK << endl; 
}

float TK:: getSDTK()
{
    return SDTK; 
}

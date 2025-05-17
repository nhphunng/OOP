#include "class.h"

LyLuuNiem:: LyLuuNiem()
{
    this->tenLyLuuNiem ="";
    this->giaTienLyLuuNiem = 0; 
}

LyLuuNiem:: LyLuuNiem(string tenLyLuNiem, float giaTienLyLuuNiem, DoUong *src)
{
    this->tenLyLuuNiem = tenLyLuNiem; 
    this->giaTienLyLuuNiem = giaTienLyLuuNiem; 
    this->douong = src; 
}

LyLuuNiem& LyLuuNiem:: operator=(const LyLuuNiem& other)
{
    if(this != &other)
    {
        this->tenLyLuuNiem = other.tenLyLuuNiem; 
        this->giaTienLyLuuNiem = other.giaTienLyLuuNiem; 
    }
    return *this; 
}

float LyLuuNiem:: getGiaTienLyLuuNiem()
{
    return this->giaTienLyLuuNiem; 
}

void LyLuuNiem:: displayLyLuuNiem()
{
    cout << this->tenLyLuuNiem << endl; 
    cout << *(this->douong) << endl; 
    float cost = this->giaTienLyLuuNiem + this->douong->tongGiaTien();
    cout << cost << endl; 
}
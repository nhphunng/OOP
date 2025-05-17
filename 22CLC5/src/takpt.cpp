#include "class.h"

TKPT:: TKPT(string name, TK* taikhoan)
{
    this->hoten = name; 
    this->taikhoan = taikhoan; 
    this->chitieu = 0; 
}

float TKPT :: rutTien(float sotien)
{
    return this->taikhoan->rutTien(sotien);
}



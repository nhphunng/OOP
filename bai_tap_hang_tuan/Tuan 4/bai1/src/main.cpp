#include "phanso.h"

int main()
{
    PhanSo a; 
    PhanSo b(5, 9);
    PhanSo c(4);
    PhanSo d = c + b; 
    PhanSo e;
    e = c - b; 
    PhanSo f = c * b; 
    PhanSo g = c / b; 
    a.display();
    //a.displayDecimal();
    b.display();
    d.display();
    e.display();
    f.display();
    g.display();
    return 0; 
}
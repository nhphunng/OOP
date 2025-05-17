#include "square.h"

void Square::display()
{
    cout << "Side: " << this->length << endl;
    cout << this->calArea() << " " << this->calParimeter() << endl; 
}

float Square::calParimeter()
{
    return this->length*4; 
}
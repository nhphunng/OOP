#include "rectangle.h"

Rectangle::Rectangle()
{
    this->length = 0; 
    this->width = 0; 
}

Rectangle::Rectangle(float length, float width)
{
    this->length = length; 
    this->width = width; 
}

Rectangle::~Rectangle()
{

}

float Rectangle::calArea()
{
    return length*width; 
}

float Rectangle::calParimeter()
{
    return (length+width)*2;
}

void Rectangle::display()
{
    cout << length << " " << width << endl; 
    cout << this->calArea() << " " << this->calParimeter() << endl;
}
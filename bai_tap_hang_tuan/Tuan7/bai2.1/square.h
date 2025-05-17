#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Rectangle; 

class Square : public Rectangle
{
    public: 
    Square(double side) : Rectangle(side, side){};
    virtual void display();
    virtual float calParimeter();
};

#endif
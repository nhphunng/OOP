#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std; 

class Rectangle
{
    protected: 
    float length, width; 
    public: 
    Rectangle();
    Rectangle(float length, float width);
    ~Rectangle();
    float calArea();
    virtual float calParimeter();
    virtual void display();
};

#endif
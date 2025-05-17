#include <iostream>
#include "point.h"
#include <cmath>
using namespace std; 

Point::Point()
{
    x = 0; 
    y = 0; 
}
Point::Point(double xx)
{
    x = xx; 
    y = 0; 
}
Point::Point(double xx, double yy)
{
    this->x = xx; 
    this->y = yy;  
}

Point Point::input()
{
    int xx, yy; 
    cout << "Nhap x: "; 
    cin >> xx; 
    cout << "Nhap y; "; 
    cin >> yy; 
    return Point(xx, yy);
}

void Point::displayPoint()
{
    cout << this->x << " " << this->y << endl; 
}

double Point::calDistance(const Point other)
{
    return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}


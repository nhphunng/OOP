#include<iostream>
#include<cmath>
#include"rectangle.h"
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
void Point::input()
{
    cout << "Nhap x: "; 
    cin >> x; 
    cout << "Nhap y: ";  // Sửa lại dấu chấm phẩy thành dấu hai chấm.
    cin >> y; 
}
void Point::displayPoint()
{
    cout << this->x << " " << this->y << endl; 
}

double Point::calDistance( Point other)
{
    return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}
Rectangle::Rectangle()
{
    for(int i = 0; i < 4; i++)
    {
        cout << "Nhap dinh thu " << i + 1<< ": " << endl;
        p[i].input();
    }
}

void Rectangle::displayRegtangle()
{
    cout << "4 dinh cua hinh chu nhat lan luot la: " << endl;
    for(int i = 0; i < 4; i++)
    {
        p[i].displayPoint();
    }
}

bool Rectangle::checkRegtangle()
{
    double ab = p[0].calDistance(p[1]);
    double bc = p[1].calDistance(p[2]);
    double cd = p[2].calDistance(p[3]);
    double da = p[3].calDistance(p[0]);
    double ac = p[0].calDistance(p[2]);
    double bd = p[1].calDistance(p[3]);
    if(ab != cd) return false; 
    if(bc != da) return false; 
    if(ac != bd) return false; 
    return true; 
}

double Rectangle::calParimeterRectangle()
{
    double ab = p[0].calDistance(p[1]);
    double bc = p[1].calDistance(p[2]);
    return (ab + bc) * 2; 
}

double Rectangle::calAreaRectangle()
{
    double ab = p[0].calDistance(p[1]);
    double bc = p[1].calDistance(p[2]);
    return ab * bc; 
}

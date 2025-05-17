#include <iostream>
#include "point.h"
using namespace std; 

int main()
{
    cout << "Nhap diem thu nhat" << endl; 
    Point p1 = Point::input();
    cout << "Nhap diem thu hai" << endl; 
    Point p2 = Point::input();

    cout << "Toa do diem thu nhat: ";
    p1.displayPoint();
    cout << "Toa do diem thu hai: "; 
    p2.displayPoint();

    cout << "Khoang cach giua hai diem: ";
    double dis = p1.calDistance(p2);
    cout << dis << endl;

    return 0;  

}
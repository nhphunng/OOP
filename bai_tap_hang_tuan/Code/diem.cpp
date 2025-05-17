#include<iostream>
#include<math.h>
using namespace std; 

class Diem
{
    private:
        double x, y;
    public:
        void Xuat();
        //Diem(double x, double y): x(x), y(y){};
        /*
        Diem();
        Diem(double x);
        Diem(double x, double y);
        */
        Diem(double x = 0, double y = 0) : x(x), y(y){};
        Diem(Diem &u);
        double kc(Diem u);

};
double Diem::kc(Diem u)
{
    return sqrt(pow(x - u.x, 2) + pow(y - u.y, 2));
}
/*
Diem::Diem()
{
    this->x = 0; 
    this->y = 0; 
}
Diem::Diem(double x)
{
    this->x = x; 
    this->y = 0; 
}
Diem::Diem(double x, double y)
{
    this->x = x; 
    this->y = y; 
}
*/
void Diem::Xuat()
{
    cout << x << ", " << y << endl; 
}
Diem::Diem(Diem &u)
{
    cout << "Ham thiet lap sao chep" << endl; 
    this->x = u.x; 
    this->y = u.y;
}
int main()
{
    Diem p1;
    Diem p2 (1, 1);
    double res = p1.kc(p2);
    cout << res << endl; 
    //Phep gan doi tuong
    // Diem p1; 
    // p1 = p; 
    // p1.Xuat();

    //Con tro doi tuong
    // Diem *p1 = &p; 
    // p1->Xuat();
    // Diem *p2 = new Diem(5, 6);
    // p2->Xuat();
    // delete p2; 
    return 0; 
}
#include <iostream>
#include "rectangle.h"
using namespace std; 

int main()
{
    Rectangle rec;
    bool check = rec.checkRegtangle();
    if(check == 0)
        cout << "Khong phai la hinh chu nhat" << endl; 
    else 
    {
        rec.displayRegtangle();
        cout << "Chu vi hinh chu nhat la: ";
        cout << rec.calParimeterRectangle();
        cout << endl; 
        cout << "Dien tich hinh chu nhat la: ";
        cout << rec.calAreaRectangle();
        cout << endl; 
    }
    return 0;
    
}
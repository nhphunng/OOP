#include <iostream>
using namespace std; 

int cong2SoNguyen(int a, int &b)
{
    a = a + 1; 
    b = b + 1; 
    return a + b; 
}

int main()
{
    cout << cong2SoNguyen(2, 3);
    return 0; 
}
#include <iostream>
using namespace std; 

class SoNguyen
{
    int* dulieu; 
    int kichthuoc; 
    public: 
        SoNguyen();
        SoNguyen(int kichthuoc);
        SoNguyen(int* dulieu, int kichthuoc);
        SoNguyen(const SoNguyen &other);
        ~SoNguyen();
        SoNguyen& operator=(const SoNguyen& other);
        SoNguyen operator+(SoNguyen& other);
        SoNguyen& operator++(); //tien to
        SoNguyen operator++(int); // hau to
        friend istream& operator>>(istream &in, SoNguyen &songuyen);
        friend ostream& operator<<(ostream &out, const SoNguyen &songuyen);
};
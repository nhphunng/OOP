#include <iostream>
using namespace std; 

class Mang1Chieu
{
    private:
        int n; 
        int *a; 
    public:
        Mang1Chieu(int n = 0);
        ~Mang1Chieu();
        Mang1Chieu(Mang1Chieu &u);
        void nhap();
        void xuat();
};
Mang1Chieu::Mang1Chieu(Mang1Chieu &u)
{
    cout << "Ham thiet lap sao chep" << endl;
    this->n = u.n; 
    a = new int [n];
    for(int i = 0; i < n; i++)
    {
        this->a[i] = u.a[i];
    }
}
void Mang1Chieu::nhap()
{
    if(n == 0)
        cin >> n; 
    a = new int [n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

void Mang1Chieu::xuat()
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl; 
}

Mang1Chieu::Mang1Chieu(int n)
{
    this->n = n; 
    if(n == 0) a = NULL; 
    else 
    {
        a = new int [n];
    }
}

Mang1Chieu::~Mang1Chieu()
{
    cout << "Goi ham huy" << endl;
    delete []a; 
    a = NULL; 
}

int main()
{
    Mang1Chieu m(2);
    m.nhap();
    m.xuat();
    Mang1Chieu m1 = m; 
    m1.xuat();
    return 0; 
}

#include <iostream>
using namespace std; 

class matrix
{
    private:
        int m, n; 
        int **a; 
    public:
        matrix(int m = 0, int n = 0);
        ~matrix();
        void xuat();
        void nhap();
};

void matrix::xuat()
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
}

matrix::matrix(int m, int n)
{
    if(m > 0 && n > 0)
    {
        this->m = m;
        this->n = n; 
        a = new int *[m];
        for(int i = 0; i < m; i++)
        {
            a[i] = new int [n];
        }
    }
    else 
    {
        this->m = m; 
        this->n = n; 
    }
}
void matrix::nhap()
{
    if(m > 0 && n > 0)
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    else 
    {
        cin >> m >> n;
        a = new int *[m]; 
        for(int i = 0; i < m; i++)
        {
            a[i] = new int [n];
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }
}

matrix::~matrix()
{
    for(int i = 0; i < m; i++)
    {
        delete[] a[i];

    }
    delete[] a; 
    a = NULL; 
}

int main()
{
    matrix m(2, 3); 
    m.nhap();
    m.xuat();
    return 0; 
}


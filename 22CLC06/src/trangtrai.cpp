#include "class.h"

TrangTrai::TrangTrai()
{
    n = 100; 
    matrix = new int *[n];
    for(int i = 0; i < n; i++)
        matrix[i] = new int[n]();
}
TrangTrai:: TrangTrai(int n)
{
    this->n = n; 
    matrix = new int *[n];
    for(int i = 0; i < n; i++)
        matrix[i] = new int[n]();
}

bool TrangTrai::themViTri(int x, int y)
{
    if(x >= n || y >= n)
    {
        cout << "Vi tri khong hop le\n";
        return false; 
    }
    if(matrix[x][y] == 0)
    {
        cout << "Vi tri hop le \n";
        matrix[x][y] = 1; 
        return true; 
    }
    else 
    {
        cout << "Vi tri khong hop le \n";
        return false; 
    }
}

void TrangTrai:: xoaViTri(int x, int y)
{
    matrix[x][y] = 0; 
    cout << "Xoa thanh cong\n";
}

int TrangTrai:: getN()
{
    return n;
}

TrangTrai::~TrangTrai()
{
    if(matrix != nullptr)
    {
        for(int i = 0; i < this->n; i++)
        {
            delete[] matrix[i];
        }
    }
    delete[] matrix; 
    matrix = nullptr; 
}


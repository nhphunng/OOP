#include "class.h"

TrangTrai:: TrangTrai()
{
    this->n = 100; 
    this->m = 100; 
    this->matrix = new int*[100];
    for(int i = 0; i < 100; i++)
        this->matrix[i] = new int[100]();
}

TrangTrai:: TrangTrai(int n, int m)
{
    this->n = n; 
    this->m = m; 
    this->matrix = new int*[n];
    for(int i = 0; i < n; i++)
        this->matrix[i] = new int[m]();
}

TrangTrai:: TrangTrai(const TrangTrai& other)
{
    this->n = other.n; 
    this->m = other.m;
    matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        std::copy(other.matrix[i], other.matrix[i] + m, matrix[i]);
    }
}

TrangTrai:: ~TrangTrai()
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

int TrangTrai:: getN()
{
    return this->n; 
}
int TrangTrai:: getM()
{
    return this->m;
}
int TrangTrai:: getPoint(int x, int y)
{
    return matrix[x][y];
}
int TrangTrai :: getsize()
{
    return this->n;
} 
void TrangTrai:: setPoint(int x, int y)
{
    if(x >= n || y >= n)
    {
        cout << "Vi tri khong hop le\n";
    }
    if(matrix[x][y] == 0)
    {
        cout << "Vi tri hop le \n";
        matrix[x][y] = 1; 
    }
    else 
    {
        cout << "Vi tri khong hop le \n";
    }
}

void TrangTrai:: delPoint(int x, int y)
{
    matrix[x][y] = 0; 
}
#include "thanhpho.h"

ThanhPho:: ThanhPho()
{
    this->n = 100; 
    this->m = 100; 
    matrix = new int* [n];
    for(int i = 0; i < 100; i++)
        this->matrix[i] = new int[100]();
}

ThanhPho:: ThanhPho(int n, int m)
{
    this->n = n; 
    this->m = m; 
    this->matrix = new int*[n];
    for(int i = 0; i < n; i++)
        this->matrix[i] = new int[m]();
}

int ThanhPho:: getN()
{
    return this->n; 
}
int ThanhPho:: getM()
{
    return this->m;
}
int ThanhPho:: getPoint(int x, int y)
{
    return matrix[x][y];
}
int ThanhPho :: getsize()
{
    return this->n;
} 
void ThanhPho:: setPoint(int x, int y)
{
    if(x >= n || y >= m)
    {
        cout << "Vi tri khong hop le\n";
        return; 
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

void ThanhPho:: delPoint(int x, int y)
{
    if(x >= n || y >= m)
    {
        cout << "Vi tri khong hop le\n";
        return; 
    }
    if(matrix[x][y] != 0)
        matrix[x][y] = 0; 
}

ThanhPho:: ~ThanhPho()
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
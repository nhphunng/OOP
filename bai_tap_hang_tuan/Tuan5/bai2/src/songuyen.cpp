#include "class.h"
SoNguyen:: SoNguyen()
{
    kichthuoc = 0; 
    dulieu = nullptr; 
}

SoNguyen:: SoNguyen(int kichthuoc)
{
    this->kichthuoc = kichthuoc; 
    this->dulieu = new int [kichthuoc];
    for(int i = 0; i < kichthuoc; i++)
    {
        this->dulieu[i] = 0; 
    }
}

SoNguyen :: SoNguyen(int *dulieu, int kichthuoc)
{
    this->kichthuoc = kichthuoc; 
    this->dulieu = new int [kichthuoc];
    for(int i = 0; i < kichthuoc; i++)
    {
        this->dulieu[i] = dulieu[i];
    }
}

SoNguyen:: SoNguyen(const SoNguyen &other)
{
    this->kichthuoc = other.kichthuoc; 
    this->dulieu = new int[this->kichthuoc];
    for(int i = 0; i < this->kichthuoc; i++)
    {
        this->dulieu[i] = other.dulieu[i];
    }
}

SoNguyen::~SoNguyen()
{
    if(this->dulieu != nullptr)
    {
        delete[] this->dulieu; 
        this->dulieu = nullptr;
    }
    this->kichthuoc = 0;
}

SoNguyen& SoNguyen :: operator=(const SoNguyen& other)
{
    if(this != &other)
    {
        delete[] this->dulieu; 
        this->kichthuoc = other.kichthuoc; 
        this->dulieu = new int[this->kichthuoc];
        for(int i = 0; i < this->kichthuoc; i++)
        {
            this->dulieu[i] = other.dulieu[i];
        }
    }
    return *this; 
}

SoNguyen SoNguyen:: operator+(SoNguyen& other)
{
    SoNguyen result; 
    if(this->kichthuoc >= other.kichthuoc)
    {
        result.kichthuoc = this->kichthuoc; 
        result.dulieu = new int[result.kichthuoc];
        for(int i = 0; i < result.kichthuoc; i++)
        {
            if(i < other.kichthuoc)
                result.dulieu[i] = this->dulieu[i] + other.dulieu[i];
            else
                result.dulieu[i] = this->dulieu[i];
        }
    }
    else
    {
        result.kichthuoc = other.kichthuoc; 
        int n = result.kichthuoc; 
        result.dulieu = new int[n];
        for(int i = 0; i < n; i++)
        {
            if(i < this->kichthuoc)
                result.dulieu[i] = this->dulieu[i] + other.dulieu[i];
            else 
                result.dulieu[i] = other.dulieu[i];
        }
    }
    return result; 
}

SoNguyen& SoNguyen:: operator++()
{
    for(int i = 0; i < this->kichthuoc; i++)
    {
        this->dulieu[i] += 1; 
    }
    return *this; 
}

SoNguyen SoNguyen:: operator++(int)
{
    SoNguyen result(*this);
    for(int i = 0; i < this->kichthuoc; i++)
    {
        this->dulieu[i] += 1; 
    }
    return result; 
}

istream& operator>>(istream &in, SoNguyen &songuyen)
{
    if(songuyen.dulieu != NULL)
        delete[] songuyen.dulieu; 
    in >> songuyen.kichthuoc; 
    songuyen.dulieu = new int [songuyen.kichthuoc];
    for(int i = 0; i < songuyen.kichthuoc; i++)
    {
        in >> songuyen.dulieu[i];
    }
    return in; 
}

ostream& operator<<(ostream &out, const SoNguyen &songuyen)
{
    out << "Kich thuoc: " << songuyen.kichthuoc << endl; 
    for(int i = 0; i < songuyen.kichthuoc; i++)
    {
        out << songuyen.dulieu[i] << " ";
    }
    out << endl; 
    return out; 
}   

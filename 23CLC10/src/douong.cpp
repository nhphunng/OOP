#include "class.h"

DoUong:: DoUong()
{
    this->tenDoUong = "";
    this->giaDoUong = 0; 
    this->kichThuoc = ' ';
    this->toppings.empty();
}
DoUong:: DoUong(string tenDoUong, float giaDoUong, char kichThuoc)
{
    this->tenDoUong = tenDoUong; 
    this->giaDoUong = giaDoUong; 
    this->kichThuoc = kichThuoc;
    this->toppings.empty();
}
DoUong:: DoUong(string tenDoUong, float giaDoUong, char kichThuoc, vector<Topping*> toppings)
{
    this->tenDoUong = tenDoUong; 
    this->giaDoUong = giaDoUong; 
    this->kichThuoc = kichThuoc; 
    for(auto it : toppings)
    {
        this->toppings.push_back(it);
    }
}

DoUong::~DoUong()
{
    this->toppings.empty();
}

DoUong& DoUong:: themTopping(Topping *topping)
{
    this->toppings.push_back(topping);
    return *this; 
}

float DoUong:: tongGiaTien() const
{
    float res = 0; 
    res+= this->giaDoUong; 
    if(this->kichThuoc == 'M' || this->kichThuoc == 'm')
        res+= 5000; 
    else if(this->kichThuoc == 'L' || this->kichThuoc == 'l')
        res+= 10000; 
    for(auto it : this->toppings)
    {
        res+= it->getGiaTopping();
    }
    return res; 
}

bool DoUong:: operator>(const DoUong& other)
{
    return this->tongGiaTien() > other.tongGiaTien();
}

bool DoUong:: operator<(const DoUong& other)
{
    return this->tongGiaTien() < other.tongGiaTien();
}

bool DoUong:: operator>=(const DoUong& other)
{
    return this->tongGiaTien() >= other.tongGiaTien();
}

bool DoUong:: operator<=(const DoUong& other)
{
    return this->tongGiaTien() <= other.tongGiaTien();
}

DoUong& DoUong:: operator=(const DoUong& other)
{
    if(this != &other)
    {
        this->tenDoUong = other.tenDoUong; 
        this->giaDoUong = other.giaDoUong; 
        this->kichThuoc = other.kichThuoc; 
        for(auto it : other.toppings)
        {
            this->toppings.push_back(it);
        }
    }
    return *this; 
}

ostream& operator<<(ostream &out, const DoUong& other)
{
    cout << other.tenDoUong << endl; 
    cout << other.tongGiaTien() << endl;
    for(auto it: other.toppings)
    {
        cout << it->getTenTopping() << " ";
    }
    return out; 
}

string DoUong:: getTenDoUong()
{
    return this->tenDoUong;
}



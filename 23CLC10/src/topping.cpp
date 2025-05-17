#include "class.h"

Topping:: Topping()
{
    this->tenTopping = "";
    this->giaTopping = 0; 
}

Topping:: Topping(string tenTopping, float giaTopping)
{
    this->tenTopping = tenTopping; 
    this->giaTopping = giaTopping; 
}

Topping:: ~Topping()
{

}

float Topping:: getGiaTopping()
{
    return this->giaTopping; 
}

string Topping:: getTenTopping()
{
    return this->tenTopping; 
}

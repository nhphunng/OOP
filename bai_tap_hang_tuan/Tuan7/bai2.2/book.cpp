#include "book.h"

Book:: Book()
{
    this->ID = "";
    this->name = "";
}
Book:: Book(string ID, string name)
{
    this->ID = ID; 
    this->name = name; 
}
Book:: ~Book()
{
    
}
#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include <vector>
#include <string>
using namespace std; 

class Book
{
    string ID; 
    string name; 
    public: 
    Book();
    Book(string ID, string name);
    ~Book();
};

#endif 
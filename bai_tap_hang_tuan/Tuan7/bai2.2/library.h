#ifndef LIBRARY_H
#define LIBRARY_H
#include"book.h"
using namespace std; 

class Book; 

class Library
{
    vector<Book*> list; 
    public: 
    Library();
    void addBook(Book* book);
    void delBook(Book* book);
    ~Library();
};

#endif


#include "library.h"

Library:: Library()
{

}

void Library:: addBook(Book* book)
{
    list.push_back(book);
}

void Library:: delBook(Book* book)
{
    for(int i = 0; i < list.size(); i++)
    {
        if(this->list[i] == book)
        {
            delete list[i];
            list.erase(list.begin() + 1);
        }
    }
}

Library:: ~Library()
{
    for(int i = 0; i < list.size(); i++)
    {
        delete list[i];
    }
}
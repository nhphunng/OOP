#include "researcher.h"

Researcher:: Researcher(): Teacher("", "", "", 0){};

Researcher:: Researcher(string name, string birthDay, string ID, int year) : Teacher(name, birthDay, ID, year){};

float Researcher::calSalary()
{
    int n = 0; 
    for(int i = 0; i < this->list.size(); i++)
    {
        if(*list[i]->begin() == 'D')
            n++; 
    }
    return (year*2 + n)*20000;
}

Researcher:: ~Researcher()
{
    for(int i = 0; i < this->list.size(); i++)
    {
        delete list[i];
        list[i] = NULL; 
    }
}

istream& operator>>(istream& in, Researcher& src)
{
    getline(in, src.name);
    getline(in, src.birthDay);
    getline(in, src.ID);
    in >> src.year; 
    return in; 
}

ostream& operator<<(ostream& out, const Researcher& src)
{
    out << src.name << "\t";
    out << src.name << "\t"; 
    out << src.birthDay << "\t";
    out << src.ID << "\t";
    out << src.year << "\t";
    out << endl; 
    for(int i = 0; i < src.list.size(); i++)
    {
        out << *src.list[i];
        out << endl;  
    }
    out << endl; 
    return out; 
}


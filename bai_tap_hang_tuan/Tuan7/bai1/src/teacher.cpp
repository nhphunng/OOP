#include "teacher.h"

Teacher:: Teacher()
{
    name = "";
    birthDay = "";
    ID = "";
    year = 0; 
}
Teacher:: Teacher(string name, string birthDay, string ID, int year)
{
    this->name = name; 
    this->birthDay = birthDay; 
    this->ID = ID; 
    this->year = year; 
}
float Teacher:: calSalary()
{
    return 0; 
}

Teacher:: ~Teacher()
{
    for(int i = 0; i < this->list.size(); i++)
    {
        delete list[i];
        list[i] = NULL; 
    }
}

istream& operator>>(istream& in, Teacher& src)
{
    getline(in, src.name);
    getline(in, src.birthDay);
    getline(in, src.ID);
    in >> src.year; 
    return in; 
}

ostream& operator<<(ostream& out, const Teacher& src)
{
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
    return out; 
}

void Teacher::addList(string* s)
{
    list.push_back(s);
}
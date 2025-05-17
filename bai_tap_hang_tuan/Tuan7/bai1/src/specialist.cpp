#include"specialist.h"

Specialist::Specialist(): Teacher("", "", "", 0){};
Specialist::Specialist(string name, string birthDay, string ID, int year):Teacher(name, birthDay, ID, year){};
float Specialist::calSalary()
{
    int n = 0; 
    for(int i = 0; i < list.size(); i++)
    {
        if(*list[i]->begin() == 'T')
            n++; 
    }
    return (year*4 + n)*18000;
}

istream& operator>>(istream& in, Specialist& src)
{
    getline(in, src.name);
    getline(in, src.birthDay);
    getline(in, src.ID);
    in >> src.year; 
    return in; 
}
ostream& operator<<(ostream& out, const Specialist& src)
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

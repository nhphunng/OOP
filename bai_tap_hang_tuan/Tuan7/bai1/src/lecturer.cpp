#include "lecturer.h"

Lecturer:: Lecturer() : Teacher("", "", "", 0), academicRank(""), degree(""){}
Lecturer:: Lecturer(string name, string birthDay, string ID, string academicRank, string degree, int teachingYear) : Teacher(name, birthDay, ID, teachingYear), academicRank(academicRank), degree(degree){};

float Lecturer:: calSalary()
{
    return this->year*this->list.size()*0.12*20000;
}

Lecturer:: ~Lecturer()
{
    this->academicRank = "";
    this->degree = "";
    this->year = 0;
    for(int i = 0; i < list.size(); i++)
    {
        delete list[i];
        list[i] = NULL; 
    }
}
istream& operator>>(istream& in, Lecturer& src)
{
    getline(in, src.name);
    getline(in, src.birthDay);
    getline(in, src.ID);
    in >> src.year;
    in.ignore();
    getline(in, src.academicRank); 
    getline(in, src.degree); 
    return in; 
}
ostream& operator<<(ostream& out, const Lecturer& src)
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

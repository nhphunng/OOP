#include "assistant.h"

Assistant:: Assistant() : Teacher("", "", "", 0), numSubject(0){};
Assistant:: Assistant(string name, string birthDay, string ID, int year, int numSubject) : Teacher(name, birthDay, ID, year), numSubject(numSubject){};

float Assistant:: calSalary()
{
    return numSubject*0.3*18000;
} 

istream& operator>>(istream& in, Assistant& src)
{
    getline(in, src.name);
    getline(in, src.birthDay);
    getline(in, src.ID);
    in >> src.year;
    in >> src.numSubject; 
    return in; 
}

ostream& operator<<(ostream& out, const Assistant& src)
{
    out << src.name << "\t";
    out << src.name << "\t"; 
    out << src.birthDay << "\t";
    out << src.ID << "\t";
    out << src.year << "\t";
    out << src.numSubject << "\t";
    out << endl; 
    return out; 
}
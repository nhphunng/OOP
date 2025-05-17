#ifndef RESEARCHER_H
#define RESEARCHER_H
#include "teacher.h"

class Teacher; 

class Researcher : public Teacher
{
    public:
    Researcher();
    Researcher(string name, string birthDay, string ID, int year);
    virtual float calSalary();
    ~Researcher();

    friend istream& operator>>(istream& in, Researcher& src);
    friend ostream& operator<<(ostream& out, const Researcher& src);

};
#endif
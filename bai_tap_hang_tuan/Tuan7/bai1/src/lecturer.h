#ifndef LECTURER_H
#define LECTURER_H
#include "teacher.h"

class Teacher; 

class Lecturer : public Teacher
{
    string academicRank; 
    string degree;  
    public:
        Lecturer();
        Lecturer(string name, string birthDay, string ID, string academicRank, string degree, int teachingYear);
        virtual float calSalary();
        ~Lecturer();

        friend istream& operator>>(istream& in, Lecturer& src);
        friend ostream& operator<<(ostream& out, const Lecturer& src);


};

#endif
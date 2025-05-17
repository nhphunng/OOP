#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "teacher.h"

class Teacher; 

class University
{
    vector<Teacher*> list; 
    public: 
    University();
    float calSumSalary();
    ~University();
    void addTeacher(Teacher *src);
    void displayTeacher();
};

#endif

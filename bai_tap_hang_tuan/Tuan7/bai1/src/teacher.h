#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <string> 
#include <vector>
using namespace std; 

class Teacher
{
    protected: 
        string name; 
        string birthDay; 
        string ID; 
        int year; 
        vector<string*> list; 
    public: 
    Teacher();
    Teacher(string name, string birthDay, string ID, int year);
    virtual float calSalary();
    ~Teacher();

    friend istream& operator>>(istream& in, Teacher& src);
    friend ostream& operator<<(ostream& out, const Teacher& src);

    virtual void addList(string* s);
};

#endif
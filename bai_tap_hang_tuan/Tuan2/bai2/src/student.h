#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <ctype.h>
#include <string> 
#include <algorithm>
using namespace std; 

class Student
{
    private:
        string name;
        string phone; 
        float average; 
    public: 
        Student() : name(""), phone(""), average(0){}
        Student(string name): name(name), phone(""), average(0){}
        Student(string name, string phone, float average); 
        void input();
        void inputName();
        void inputPhone();
        void inputAverage();
        bool checkName();
        bool checkPhone();
        bool checkAverage();
        void displayStudent();
        bool operator==(const Student& other);
        float getAverage() const;
};

#endif
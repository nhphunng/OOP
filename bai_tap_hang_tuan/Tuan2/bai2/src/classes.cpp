#include "classes.h"
using namespace std; 

bool Class::checkAvailableStudent(Student checkedStudent)
{
    for(Student x : this->student)
    {
        if(x == checkedStudent)
            return true; 
    }
    return false; 
}
void Class::addStudent()
{
    Student newStudent; 
    newStudent.input();
    bool check = checkAvailableStudent(newStudent);
    if(check == 1)
    {
        cout << "Da co hoc sinh trong lop" << endl;
    }
    else 
    {
        this->student.push_back(newStudent);
        cout << "Them than cong" << endl;
    }
}
void Class::delStudent()
{
    cout<< "Nhap ten sinh vien can xoa: ";
    string name; 
    getline(cin, name);
    Student delStudent(name);
    int n = student.size();
    int i = 0;  
    for(; i < n; i++)
    {
        if(delStudent == student[i])
        {
            student.erase(student.begin() + i);
            cout << "Xoa thanh cong\n";
            break; 
        }
    }
    int newSize = student.size();
    if(n == newSize)
    {
        cout << "Khong co hoc sinh trong lop" << endl;
    }
}
bool cmpStudent(Student a, Student b)
{
    float gradeA = a.getAverage();
    float gradeB = b.getAverage();
    return gradeA > gradeB;
}
void Class::sortStudentinAverage()
{
    sort(student.begin(), student.end(), cmpStudent);
}

void Class::displayStudents()
{
    for(Student x : this->student)
    {
        x.displayStudent();
    }
}

void Class::pushStudent(Student s)
{
    student.push_back(s);
}





#include "student.h"
using namespace std; 

Student::Student(string name, string phone, float average)
{
    this->name = name; 
    this->phone = phone; 
    this->average = average; 
}

bool Student::checkName()
{
    int totalAscii = 20; 
    int len = name.length();
    if(len > 20)
        return 0;
    for(int i = 0; i < len; i++)
    {
        if(name[i] != ' ')
        {
            if(name[i] <  'A' || (name[i] > 'Z' && name[i] < 'a'))
                return false; 
            else if(name[i] > 'z' || (name[i] < 'a' && name[i] > 'Z'))
                return false; 
        }
    }
    return true; 
}

bool Student::checkPhone()
{
    int len = phone.length();
    if(len < 9 || len > 11)
        return 0; 
    for(int i = 0; i < len; i++)
    {
        if(!isdigit(phone[i]))
            return false; 
    }
    return true; 
}

bool Student::checkAverage()
{
    if(average < 0 || average > 10)
        return 0; 
    return 1; 
}

void Student::displayStudent()
{
    cout << "Name: " << name << endl; 
    cout << "Phone: " << phone << endl; 
    cout << "Average: " << average << endl; 
}

void Student::inputName()
{
    do
    {
        cout << "Nhap ten sinh vien can them: ";
        getline(cin, name);

    } while (!checkName());
}

void Student::inputPhone()
{
    do
    {
        /* code */
        cout << "Nhap so dien thoai can them: ";
        getline(cin, phone);
    } while (!checkPhone());
    
}

void Student::inputAverage()
{
    do
    {
        /* code */
        cout << "Nhap diem trung binh can them: ";
        cin >> average; 
    } while (!checkAverage());
    
}

void Student::input()
{
    inputName();
    inputPhone();
    inputAverage();
}

bool Student::operator==(const Student& other)
{
    return this->name == other.name;
}

float Student::getAverage () const
{
    float grade = this->average; 
    return grade; 
}
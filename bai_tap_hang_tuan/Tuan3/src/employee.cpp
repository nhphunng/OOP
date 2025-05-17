#include "employee.h"

//Getter
string Employee::getName()
{
    return this->name; 
}

unsigned int Employee::getDay()
{
    return this->day; 
}

string Employee::getPosition()
{
   return position; 
}

float Employee::getSalaryFactor()
{
    return salaryFactor;
}

string Employee::getNickName()
{
    return nickName; 
}

//Setter
void Employee::setName(string name)
{
    this->name = name; 
}

void Employee::setDay(unsigned int day)
{
    this->day = day; 
}

void Employee::setNickName(string nickName)
{
    this->nickName = nickName; 
}

void Employee::setPosition(string postion)
{
    this->position = position;
}

void Employee::setSalaryFactor(float salaryFactor)
{
    this->salaryFactor = salaryFactor; 
}

Employee :: Employee()
{
    name = "";
    position = "";
    nickName = "";
    day = 0; 
    salaryFactor = 0; 
}

Employee::Employee(string name, unsigned int day)
{
    this->name = name; 
    this->day = day; 

    if(this->day > 0 && this->day < 365)
        position = "Nhan vien";
    else if(this->day >= 365 && this->day < 730)
        position = "Quan ly";
    else if(this->day >= 730 && this->day < 1460)
        position = "Truong phong";
    else if(this->day >= 1460)
        position = "Truong ban quan ly";

    if(this->position == "Nhan vien")
        salaryFactor = 1.0;
    else if(this->position == "Quan ly")
        salaryFactor = 1.5;
    else if(position == "Truong phong")
        salaryFactor = 2.25;
    else if(position == "Truong ban quan ly")
        salaryFactor = 4.0;
    
    nickName = position + " " + name; 
}

Employee::Employee(string name, string position, string nickName, unsigned int day, float salaryFactor)
{
    this->name = name; 
    this->day = day; 
    this->position = position; 
    this->nickName = nickName; 
    this->salaryFactor = salaryFactor; 
}

Employee::Employee(const Employee& other)
{
    position = other.position; 
    salaryFactor = other.salaryFactor;
    day = other.day; 
    name = "";
    nickName = "";
}

Employee::~Employee(){}

void Employee::inputEmployee()
{
 
    cout << "Nhap ten nhan vien: ";
    getline(cin, name);
    cout << "Nhap vi tri: ";
    getline(cin, position);
    cout << "Nhap ten goi: ";
    getline(cin, nickName);
    cout << "Nhap so ngay lam: ";
    cin >> day; 
    cout << "Nhap he so luong: ";
    cin >> salaryFactor;

}

void Employee::displayEmployee()
{
    cout << "Ten nhan vien: " << name << endl; 
    cout << "Vi tri: " << position << endl; 
    cout << "Ten goi: " << nickName << endl; 
    cout << "So ngay lam: " << day << endl; 
    cout << "He so luong: " << salaryFactor << endl; 
}


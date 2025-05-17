#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string> 
using namespace std; 

class Employee
{
    private: 
        string name; 
        string position; 
        string nickName;
        unsigned int day; 
        float salaryFactor; 
    public: 
        //Getter
        string getName();
        string getPosition();
        unsigned int getDay();
        float getSalaryFactor();
        string getNickName();
        //Setter
        void setName(string name);
        void setPosition(string pos);
        void setDay(unsigned int day);
        void setSalaryFactor(float salaryFactor);
        void setNickName(string nickName);
        // Constructor
        Employee();
        Employee(string name, string position, string nickName, unsigned int day, float salaryFactor);
        Employee(string name, unsigned int day);
        Employee(const Employee &tmp); //Phương thức tạo lập sao chép, chỉ sao chép chức danh, hệ số lương và số ngày làm
        //việc, ngoài ra các thông tin còn lại được tạo lập mặc định
        //Destructor
        ~Employee();
        // c. 
        void inputEmployee();
        void displayEmployee();

};
#endif

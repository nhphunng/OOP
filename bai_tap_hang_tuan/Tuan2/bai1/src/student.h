#include <string> 
using namespace std; 

class Student
{
    private:
        string name;
        string phone; 
        float average; 
    public: 
        Student() : name(""), phone(""), average(0){}
        Student(string name, string phone, float average);
        void input();
        void inputName();
        void inputPhone();
        void inputAverage();
        bool checkName();
        bool checkPhone();
        bool checkAverage();
        void displayStudent();
        
};
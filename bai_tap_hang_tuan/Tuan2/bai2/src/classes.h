#include "student.h"
#include <vector>
class Class
{
    private:
        vector<Student> student; 
    public:
        void addStudent();
        bool checkAvailableStudent(Student checkedStudent);
        void delStudent();
        bool checkDelStudent();
        void sortStudentinAverage();
        void displayStudents();   
        void pushStudent(Student s);
        friend bool cmpStudent(Student a, Student b);
};
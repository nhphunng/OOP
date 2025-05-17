#include "teacher.h"

class Teacher;

class Specialist : public Teacher
{
    public:
    Specialist();
    Specialist(string name, string birthDay, string ID, int year);
    virtual float calSalary();

    friend istream& operator>>(istream& in, Specialist& src);
    friend ostream& operator<<(ostream& out, const Specialist& src);

};
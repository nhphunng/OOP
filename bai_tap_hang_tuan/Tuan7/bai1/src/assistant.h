#include "teacher.h"

class Teacher; 

class Assistant : public Teacher
{
    int numSubject; 
    public: 
        Assistant();
        Assistant(string name, string birthDay, string ID, int year, int numSubject);
        virtual float calSalary();
        ~Assistant();

        friend istream& operator>>(istream& in, Assistant& src);
        friend ostream& operator<<(ostream& out, const Assistant& src);
};
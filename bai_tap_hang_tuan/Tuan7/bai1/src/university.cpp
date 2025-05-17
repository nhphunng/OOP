#include"university.h"

University::University()
{

}

float University::calSumSalary()
{
    float res = 0; 
    for(int i = 0; i < list.size(); i++)
    {
        res += list[i]->calSalary();
    }
    return res; 
}

University::~University()
{
    for(int i = 0; i < list.size(); i++)
    {
        delete list[i];
        list[i] = NULL; 
    }
    list.empty();
}

void University:: addTeacher(Teacher *src)
{
    list.push_back(src);
}

void University:: displayTeacher()
{
    for(int i = 0; i < list.size(); i++)
    {
        cout << *list[i] << endl; 
    }
}


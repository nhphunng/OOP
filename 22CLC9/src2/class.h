#include <iostream> 
#include <string>
#include <sstream>
using namespace std; 

class MyString
{
    private: 
        string s; 
    public: 
        MyString(string s);
        MyString& operator+(string s);
        MyString& operator=(const MyString& other);
        void norm();
        vector<MyString> split(char c);
        friend ostream& operator<<(ostream &os, const MyString &s);
};
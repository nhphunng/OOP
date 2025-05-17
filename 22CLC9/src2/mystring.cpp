#include "class.h"

MyString::MyString(string s)
{
    this->s = s; 
}   
MyString& MyString:: operator+(string s)
{
    this->s += s; 
    return *this; 
}
MyString& MyString:: operator=(const MyString&other)
{
    if(this != &other)
    {
        this->s.empty();
        this->s = other.s; 
    }
    return *this; 
}
void MyString::norm()
{
    vector<string> vString; 
    stringstream ss(s);
    string tmp = "";
    while(getline(ss, tmp, ' '))
    {
        if(!tmp.empty())
            vString.push_back(tmp);
    }
    string result = "";
    for(int i = 0; i < vString.size(); ++i)
    {
        result += vString[i]; 
        if (i < vString.size() - 1)  // Add space only between words
            result += " ";;
    }
    MyString res(result);
    *this = res; 
}

vector<MyString> MyString:: split(char c)
{
    vector<MyString> vString;  
    stringstream ss(this->s);
    string tmp;
    while(getline(ss, tmp, c))
    {
        if(!tmp.empty())
            vString.push_back(MyString(tmp));
    }
    return vString; 
}

ostream& operator<<(ostream &os, const MyString &s)
{
    os << s.s;
    return os; 
}


#include "class.h"

int main() 
{ 
    MyString str1("I am a student."); 
    MyString str2 = str1 + "  I am       An     " ; 
    str2.norm();   //chuẩn hóa chuỗi: giữa các từ bên trong chuỗi chỉ tồn tại     
                // duy nhất 1 khoảng trắng, xóa các khoảng trắng đầu và cuối chuỗi nếu có 
    cout<<str2;   //I am a student. I am An 
    vector<MyString> vMs = str2.split(' '); 
    for (vector<MyString>::iterator it=vMs.begin(); it!=vMs.end(); it++) 
    { 
        cout << *it << "\n";  
    } 
    return 0; 
} 
//I 
//am 
//a 
//student. 
//An 
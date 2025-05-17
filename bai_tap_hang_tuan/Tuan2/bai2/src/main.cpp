#include"student.h"
#include"classes.h"
#include<iostream>
#include<fstream>
using namespace std; 

void readFile(ifstream& fin, string fileName, Class &classes)
{
    fin.open(fileName);
    if(!fin)
    {
        cout << "Khong mo duoc file \n";
        return; 
    }
    int n; 
    fin >> n; 
    
    while(n--)
    {
        string name, phone;
        float average; 
        fin.ignore();
        getline(fin, name);
        fin.ignore();
        getline(fin, phone);
        fin >> average; 
        Student s(name, phone, average);
        classes.pushStudent(s);
    }
    cout << "Doc file thanh cong \n";
    fin.close();
}

int main()
{
    ifstream fin;
    string fileName = "/Users/nguyenhoangphihung/Tài liệu /OOP/Tuan2/bai2/src/LopHoc.txt";
    Class classes; 
    readFile(fin, fileName, classes);
    classes.addStudent();
    cout << "------------------------------------\n";
    classes.delStudent();
    cout << "------------------------------------\n";
    classes.sortStudentinAverage();
    classes.displayStudents();
    return 0; 
}
#include "teacher.h"
#include "university.h"
#include "lecturer.h"
#include "researcher.h"
#include "specialist.h"
#include "assistant.h"

int main()
{
    University KHTN; 
    while(true)
    {
        cout << "1. Nhap thong tin giang vien \n";
        cout << "2. Nhap thong tin tro giang \n";
        cout << "3. Nhap thong tin nghien cuu sinh \n";
        cout << "4. Nhap thong tin chuyen vien \n";
        cout << "5. Tinh tong tien luong truong can tra\n";
        cout << "6. Xuat thong tin nhan su\n";
        cout << "0. Ket thuc chuong trinh\n";
        int choice; 
        cin >> choice; 
        cin.ignore();
        Teacher *teacher  = NULL; 
        switch (choice)
        {
        case 1: 
            teacher = new Lecturer();
            cin >> *static_cast<Lecturer*> (teacher); 
            cout << "Nhap vao ten mon hoc dang giang day, nhap 0 de thoat:  " << endl;
            while (true)
            {
                /* code */
                string s; 
                getline(cin, s);
                string *str = new string(s);
                if(s != "0")
                {
                    teacher->addList(str);
                }
                else
                    break; 
            }
            break;
        case 2: 
            teacher = new Assistant();
            cin >> *static_cast<Assistant*>(teacher); 
            break; 
        case 3: 
            teacher = new Researcher();
            cin >> *static_cast<Researcher*> (teacher);  
            cout << "Nhap vao ten de tai, nhap 0 de thoat:  " << endl;
            while (true)
            {
                /* code */
                string s; 
                getline(cin, s);
                string *str = new string(s);
                if(s != "0")
                {
                    teacher->addList(str);
                }
                else
                    break; 
            }
            break;
        case 4: 
            teacher = new Specialist();
            cin >> *static_cast<Specialist*> (teacher);  
            cout << "Nhap vao ten de tai, nhap 0 de thoat:  " << endl;
            while (true)
            {
                /* code */
                string s; 
                getline(cin, s);
                string *str = new string(s);
                if(s != "0")
                {
                    teacher->addList(str);
                }
                else
                    break; 
            }
            break; 
        case 5: 
            cout << KHTN.calSumSalary() << endl; 
            break;
        case 6: 
            KHTN.displayTeacher();
            break; 
        case 0: 
            return 0; 
        default:
            break;
        }
        if(teacher)
            KHTN.addTeacher(teacher);
    }
    return 0; 
}
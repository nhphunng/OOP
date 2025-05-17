#include <iostream>
#include <string>
#include <vector>
using namespace std; 

class LyLuuNiem;

class Topping
{
    string tenTopping; 
    float giaTopping; 
    public:
        Topping();
        Topping(string tenTopping, float giaTopping);
        ~Topping();
        float getGiaTopping();
        string getTenTopping();
};

class DoUong
{
    string tenDoUong; 
    float giaDoUong; 
    char kichThuoc; 
    vector<Topping*> toppings; 
    public:
        DoUong();
        DoUong(string tenDoUong, float giaDoUong, char kichThuoc);
        DoUong(string tenDoUong, float giaDoUong, char kichThuoc, vector<Topping*> toppings);
        ~DoUong();
        DoUong& themTopping(Topping *topping);
        float tongGiaTien() const;
        bool operator>(const DoUong& other);
        bool operator<(const DoUong& other);
        bool operator>=(const DoUong& other);
        bool operator<=(const DoUong& other);
        DoUong& operator=(const DoUong& other);
        friend ostream& operator<<(ostream &out, const DoUong& other);
        string getTenDoUong();
};

class Quan : public DoUong
{
    string tenQuan; 
    string diachi; 
    vector<DoUong*> dsDoUong; 
    public:
        Quan();
        Quan(string tenQuan, string diachi);
        Quan(string tenQuan, string diachi, vector<DoUong*> dsDoUong);
        void displayThongTinQuan();
        void themDoUong(DoUong *src);
        friend bool cmp( DoUong *a, DoUong *b);
        void sortdsDoUong();
        Quan& operator=(const Quan& other);

};

class LyLuuNiem : public DoUong
{
    string tenLyLuuNiem; 
    float giaTienLyLuuNiem; 
    DoUong *douong; 
    public: 
        LyLuuNiem();
        LyLuuNiem(string tenLyLuNiem, float giaTienLyLuuNiem, DoUong *src);
        LyLuuNiem& operator=(const LyLuuNiem& other);
        float getGiaTienLyLuuNiem();
        void displayLyLuuNiem();
};
#include <iostream> 
#include <math.h>
#include <string> 
#include <sstream>
using namespace std; 

class DongHoTheThao
{
    int gio,phut, giay, phantramGiay; 
    public:
        DongHoTheThao();
        DongHoTheThao(int phut, int giay, int phantramGiay);
        DongHoTheThao(int giay, int phantramGiay);
        DongHoTheThao(int phantramGiay);
        DongHoTheThao(string s);
        DongHoTheThao(const DongHoTheThao& other);
        friend ostream& operator<<(ostream& out, const DongHoTheThao& src);
        DongHoTheThao& operator=(const DongHoTheThao& other);
        DongHoTheThao* operator+(const DongHoTheThao& other);
        DongHoTheThao* operator+(int phantramGiay);
        friend DongHoTheThao* operator+(int phantramGiay, const DongHoTheThao& other);
        DongHoTheThao& operator++();
        DongHoTheThao operator++(int);
        int totalPTG();
};

class MangDHTT : public DongHoTheThao
{
    vector<DongHoTheThao*> mangDongHo; 
    public: 
        MangDHTT();
        void ThemDHTT(DongHoTheThao *dongho);
        friend ostream& operator<<(ostream& out, const MangDHTT& src);
        DongHoTheThao*& operator[](int n);
        DongHoTheThao* DHTTLonNhat();
        ~MangDHTT();
};
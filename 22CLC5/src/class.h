#include <iostream>
#include <string> 
using namespace std; 

class TK 
{
    int CCCD; 
    protected:
        string hoten; 
        float SDTK; 
    public:
        TK(); 
        TK(int CCCD, string hoten, float SDTK);
        float napTien(float sotien);
        float rutTien(float sotien);
        void kiemTra();
        TK& operator=(const TK& other);
        bool operator<(const TK & other);
        bool operator>(const TK & other);
        bool operator<=(const TK & other);
        bool operator>=(const TK & other);
        void displayTK();
        float getSDTK();

};

class NganHang
{
    string ten; 
    string diachi; 
    vector<TK> list; 
    public:
        NganHang(string name, string diachi);
        void sortNganHang();
        friend bool cmp(TK a, TK b);
        long long tongTien();
};

class TKPT : public TK
{
    float chitieu;
    TK* taikhoan;
    public:
        TKPT(string name, TK* taikhoan);
        float rutTien(float sotien);
        
};

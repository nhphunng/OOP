#include <iostream>
using namespace std; 

class SV
{
    private:
        string mssv;
        string hoten; 
        double diem; 
    public:
        void xuat();
        void nhap();
        string getMSSV();
        SV(string mssv = "", string hoten = "", double diem = 0) : 
            mssv(mssv), hoten(hoten), diem(diem){};
};

class Lop
{
    private:
        const int spt; //thanh vien du lieu hang
        SV *sv; 
    public: 
        Lop(int t) : spt(t)
        {
            sv = new SV[spt];
        }
        void xuat() const; // ham thanh phan hang
        void nhap() const;
        void timkiem(string mssv) const; // ham thanh phan hang
};
string SV::getMSSV()
{
    return mssv; 
}
void SV::xuat()
{
    cout << mssv << " " << hoten << " " << diem << endl;
}

void SV::nhap()
{
    getline(cin, mssv);
    fflush(stdin);
    getline(cin, hoten);
    fflush(stdin);
    cin >> diem; 
    fflush(stdin);
}

void Lop::timkiem(string mssv) const
{
    SV res; 
    for(int i = 0; i < spt; i++)
    {
        if(sv[i].getMSSV() == mssv)
        {
            res = sv[i];
            break; 
        }
    }
    res.xuat();
}

void Lop::nhap() const 
{
    for(int i = 0; i < spt; i++)
    {
        cout << "Nhap sinh vien thu " << i + 1 << endl; 
        sv[i].nhap();
    }
}

void Lop::xuat() const
{
    for(int i = 0; i < spt; i++)
    {
        sv[i].xuat();
    }
}

int main()
{
    const Lop l(3); // hang doi tuong
    l.nhap();
    l.xuat();
    l.timkiem("002");
    return 0; 
}


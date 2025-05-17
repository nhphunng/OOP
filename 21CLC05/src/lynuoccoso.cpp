#include "class.h"

LyNuocCoSo:: LyNuocCoSo()
{
    this->loaiTra = "";
    this->loaiHuongLieu = "";
    thetichMacDinh = 0; 
    traSua = 0; 
    luongduongMacDinh = 0; 
    luongdaMacDinh = 0; 
    giaCoSo = 0; 
}

LyNuocCoSo::LyNuocCoSo(string loaiTra, string loaiHuongLieu, float thetichMacDinh,
    float traSua, float luongduongMacDinh, float luongdaMacDinh, float giaCoSo)
{
    this->loaiTra = loaiTra; 
    this->loaiHuongLieu = loaiHuongLieu; 
    this->thetichMacDinh = thetichMacDinh; 
    if(traSua > -1 && traSua < 101)
        this->traSua = traSua; 
    else 
        this->traSua = 0; 
    if(luongduongMacDinh > -1 && luongduongMacDinh < 101)
        this->luongduongMacDinh = luongduongMacDinh; 
    else
        this->luongduongMacDinh = 0; 
    this->luongdaMacDinh = luongdaMacDinh; 
    this->giaCoSo = giaCoSo; 
}

string LyNuocCoSo::getName() const
{
    string s = this->loaiTra;
    if(traSua > 0)
        s += " Sua ";
    s+= loaiHuongLieu; 
    return s; 
}

ostream& operator<<(ostream& out,const LyNuocCoSo& ly)
{
    out << ly.loaiTra << " " << ly.loaiHuongLieu << " "; 
    out << ly.thetichMacDinh << " " << ly.traSua; 
    out << ly.luongduongMacDinh << " " << ly.luongdaMacDinh << " ";
    out << ly.giaCoSo << endl; 
    return out; 
}

istream& operator>>(istream& in, LyNuocCoSo& ly)
{
    getline(in, ly.loaiTra);
    getline(in, ly.loaiHuongLieu);
    in >> ly.thetichMacDinh; 
    do
    {
        cout << "Nhap tra sua mac dinh: ";
        in >> ly.traSua; 
        if (ly.luongduongMacDinh < 0 || ly.luongduongMacDinh > 100) 
        {
            cout << "Gia tri khong hop le! Vui long nhap trong khoang 0-100.\n";
        }
    } while ((ly.traSua < 0 || ly.traSua > 100));
    do
    {
        cout << "Nhap luong duong mac dinh: ";
        in >> ly.luongduongMacDinh; 
        if (ly.luongduongMacDinh < 0 || ly.luongduongMacDinh > 100) 
        {
            cout << "Gia tri khong hop le! Vui long nhap trong khoang 0-100.\n";
        }
    } while ((ly.luongduongMacDinh < 0 || ly.luongduongMacDinh > 100));
    
    in >> ly.luongdaMacDinh;
    in >> ly.giaCoSo;  
    return in; 
}

LyNuocCoSo& LyNuocCoSo::operator=(const LyNuocCoSo& other)
{
    if(this != &other)
    {
        this->loaiTra = other.loaiTra; 
        loaiHuongLieu = other.loaiHuongLieu; 
        thetichMacDinh = other.thetichMacDinh; 
        traSua = other.traSua; 
        luongduongMacDinh = other.luongduongMacDinh; 
        luongdaMacDinh = other.luongdaMacDinh; 
        giaCoSo = other.giaCoSo; 
    }
    return *this; 
}

float LyNuocCoSo:: getTheTichMacDinh() const
{
    return this->thetichMacDinh; 
}

float LyNuocCoSo:: getGiaCoSo() const
{
    return this->giaCoSo; 
}

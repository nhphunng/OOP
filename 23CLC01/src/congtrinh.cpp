#include "congtrinh.h"

CongTrinh:: CongTrinh()
{
    tenCongTrinh = "";
    loaiCongTrinh = "";
    chiphi = 1; 
    capdo = 1; 
    thoigianht = 60; 
    tainguyen = 0; 
    thoigiansanxuat = 60; 
    thoigiansanxuatconlai = 60; 
    x = -1; 
    y = -1; 
}

CongTrinh:: CongTrinh(string tenCongTrinh, string loaiCongTrinh, float chiphi, float thoigianht, int capdo, float tainguyen, float thoigiansanxuat)
{
    this->tenCongTrinh = tenCongTrinh; 
    this->loaiCongTrinh = loaiCongTrinh; 
    this->thoigianht = thoigianht; 
    this->capdo = capdo; 
    this->tainguyen = tainguyen; 
    this->thoigiansanxuat = thoigiansanxuat;
    thoigiansanxuatconlai = thoigiansanxuat;
    x = -1; 
    y = -1; 
}

CongTrinh:: CongTrinh(const CongTrinh& other)
{
    this->tenCongTrinh = other.tenCongTrinh; 
    this->loaiCongTrinh = other.loaiCongTrinh; 
    this->chiphi = other.chiphi; 
    this->thoigianht = other.thoigianht; 
    this->capdo = other.capdo; 
    this->tainguyen = other.tainguyen; 
    this->thoigiansanxuat = other.thoigiansanxuat; 
    this->thoigiansanxuatconlai = other.thoigiansanxuatconlai;
}

CongTrinh::~CongTrinh()
{
    
}

istream& operator>>(istream& in, CongTrinh& other)
{
    bool check = false; 
    while(!check)
    {
        cout << "Nhap ten cong trinh: ";
        getline(in, other.tenCongTrinh);
        if(other.tenCongTrinh.length() < 20)
        {
            check = true; 
        }
        for(int i = 0; i < other.tenCongTrinh.length(); i++)
        {
            if(!isalpha(other.tenCongTrinh[i]))
                check = false;         
        }
        if(check == false)
            cout << "Ten cong trinh khong hop le\n";
    }

    int n;
    do 
    {
        cout << "Nhap loai cong trinh: " << endl;
        cout << "1. Cong trinh dan dung\n";
        cout << "2. Cong trinh thuong mai\n";
        cin >> n; 
        if(n == 1)
            other.loaiCongTrinh = "Cong trinh dan dung";
        else if (n == 2)
            other.loaiCongTrinh = "Cong trinh thuong mai";
    }
    while(n != 1 && n != 2);
    cout << "Nhap chi phi xay dung: ";
    in >> other.chiphi; 
    cout << "Nhap thoi gian xay dung: ";
    in >> other.thoigianht; 
    cout << "Nhap tai nguyen nhan duoc: ";
    in >> other.tainguyen; 
    cout << "Nhap thoi gian san xuat";
    in >> other.thoigiansanxuat; 
    cout << "Nhap thoi gian san xuat con lai: ";
    in >> other.thoigiansanxuatconlai;
    return in;
}

ostream& operator<<(ostream& out, const CongTrinh& other)
{
    out << "Ten cong trinh: ";
    out << other.tenCongTrinh << endl; 
    out << "Loai cong trinh: ";
    out << other.loaiCongTrinh << endl; 
    out << "Chi phi: ";
    out << other.chiphi << endl; 
    out << "Thoi gian hoan thanh";
    out << other.thoigianht << endl; 
    out << "Cap do cong trinh: ";
    out << other.capdo << endl; 
    out << "Tai nguyen thu duoc: ";
    out << other.tainguyen << endl;
    out << "Thoi gian san xuat \n";
    out << other.thoigiansanxuat << endl; 
    out << "Thoi gian con lai \n";
    out << other.thoigiansanxuatconlai << endl; 
    return out; 
}

void CongTrinh:: xayDungCongTrinh(ThanhPho& city, Player& player, int x, int y)
{
    if(x > city.getN() || y > city.getM())
    {
        cout << "Vi tri khong hop le \n";
        return; 
    }  
    if(player.getVang() < this->chiphi)
    {
        cout << "Khong du tai nguyen \n";
        return; 
    }
    if(city.getPoint(x, y) != 0)
    {
        cout << "Vi tri khong hop le \n";
        return; 
    }
    this->x = x; 
    this->y = y; 
    city.setPoint(x, y);
    player.themCongTrinh(this);
}

void CongTrinh:: capnhatThoiGianCongTrinh(float thoigianht, float thoigiansx)
{
    this->thoigiansanxuat = thoigiansx;
    this->thoigianht = thoigianht;  
}

void CongTrinh:: nangcapCongTrinh(Player& player)
{
    if(player.truNangLuong())
    {
        this->capdo += 1; 
        this->tainguyen = this->tainguyen*2; 
        cout << "Nang cap cong trinh thanh cong\n";
    }
}

void CongTrinh:: phuongthucThuHoach(ThanhPho& city, Player& player)
{
    if(this->thoigiansanxuatconlai > 0)
    {
        cout << "Chua den thoi gian thu hoach \n";
        return;
    }
    this->thoigiansanxuatconlai = this->thoigiansanxuat;
    player.congTaiNguyen(this->tainguyen);
}

string CongTrinh:: getLoaiCongTrinh()
{
    return this->loaiCongTrinh; 
}

float CongTrinh:: giamThoiGian(float time)
{
    if(thoigianht >= time)
    {
        this->thoigianht -= time; 
    }
    else 
    {
        time -= thoigianht;
        this->thoigianht = 0;
    }
    if(thoigiansanxuatconlai >= time)
        this->thoigiansanxuatconlai -= time; 
    else 
        this->thoigiansanxuatconlai = 0; 
    return this->thoigiansanxuatconlai;
}
float CongTrinh:: tangTaiNguyen(float gold)
{
    this->tainguyen += gold; 
    return this->tainguyen; 
}

void CongTrinh:: phahuyCongTrinh(ThanhPho& thanhpho, Player& player)
{
    thanhpho.delPoint(this->x, this->y);
    player.xoaCongTrinh(this);
}


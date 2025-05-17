#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <vector>
#include <string> 
using namespace std; 

class Player;

class TrangTrai
{
    int n; 
    int m;
    int **matrix; 
    public: 
        TrangTrai();
        TrangTrai(int n, int m);
        TrangTrai(const TrangTrai& other);
        ~TrangTrai();
        int getN();
        int getM();
        int getPoint(int x, int y);
        void setPoint(int x, int y);
        int getsize();
        void delPoint(int x, int y);
};

class CayTrong : public TrangTrai
{
    string name; 
    string loaicay; 
    float ghg; 
    float sp; 
    float sl; 
    float tgth; 
    int x; 
    int y; 
    public: 
        CayTrong();
        CayTrong(string name, string loaicay, float ghg, float sp, float sl, float tgth);
        CayTrong(string name, string loaicay, float ghg, float sp);
        CayTrong(const CayTrong& other);
        CayTrong& operator=(const CayTrong& other);
        ~CayTrong();
        bool operator>(const CayTrong& other);
        friend istream& operator>>(istream& in, CayTrong &src);
        friend ostream& operator<<(ostream &out, const CayTrong &src);
        void PTTC(TrangTrai &farm, Player &player, int x, int y);
        void PTTN(Player &player);
        void PTTH(TrangTrai &farm, Player &player);
        void capnhatThoiGianThuHoach(float thoiGian);
};

class VatNuoi : public TrangTrai
{
    string name; 
    float sp; 
    float sl; 
    float tgth; 
    int x; 
    int y; 
    public: 
        VatNuoi();
        VatNuoi(string name, float sp, float sl, float tgth);
        VatNuoi(string name, float sp);
        VatNuoi(const VatNuoi& other);
        VatNuoi& operator=(const VatNuoi& other);
        ~VatNuoi();
        bool operator>(const VatNuoi& other);
        friend istream& operator>>(istream& in, VatNuoi &src);
        friend ostream& operator<<(ostream &out, const VatNuoi &src);
        void phuongthucNuoi(TrangTrai &farm, Player &player, int x, int y);
        void phuongthucChoAn(Player &player);
        void phuongthucThuHoach(TrangTrai &farm, Player &player);
        void capnhatThoiGianThuHoach(float thoiGian);
};

class Player : public CayTrong
{
    int level; 
    float tainguyen; 
    int nangluong; 
    vector<CayTrong*> listCayTrong;
    vector<VatNuoi*> listVatNuoi;
    public:
    Player();
    Player(int level, float tainguyen, int nangluong);
    bool truNangLuong();
    void congTaiNguyen(float giatri);
    void themCay(CayTrong *cay);
    void xoaCay(CayTrong *cay);
    void capnhatThoiGian();
    void themVatNuoi(VatNuoi *vatnuoi);
    void xoaVatNuoi(VatNuoi *vatnuoi);
    void displayTaiNguyen();
    ~Player();
};

#endif

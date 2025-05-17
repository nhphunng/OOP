#include <iostream>
#include <string> 
#include <vector>
using namespace std; 

class TrangTrai
{
    int n; 
    int **matrix; 
    public:
        TrangTrai();
        TrangTrai(int n);
        bool themViTri(int x, int y);
        void xoaViTri(int x, int y);
        int getN();
        ~TrangTrai();
};

class CayTrong : public TrangTrai
{
    string ten; 
    string loaiCay; // cay CN va cay an trai
    float GHG;
    float SP; 
    float SL;
    float TGTH; 
    int x, y; 
    public:
        CayTrong();
        CayTrong(string ten, string loaiCay, float GHG, float SP, float SL, float TGTH);
        CayTrong(string ten, string loaiCay, float GHG, float SP);
        CayTrong(const CayTrong& other);
        ~CayTrong();
        bool operator<(const CayTrong& other);
        bool operator>(const CayTrong& other);
        friend ostream& operator<<(ostream &out, const CayTrong &cay);
        friend istream& operator>>(istream &in, CayTrong &cay);
        void giamThoiGian();
        float getSP();
        void PTTC(int x, int y);
        int getX() const;
        int getY() const;
        void capnhatTGTH(int TGTH);
        float getTGTH();
};

class Player : public CayTrong
{
    int level;
    float TN; 
    float NL;
    public:
        Player();
        Player(int level, float TN, float NL);
        void PTTN(CayTrong* cay);
        void PTTH(CayTrong* cay);
        int getLevel();

};

class DSCayTrong : public CayTrong
{
    vector<CayTrong*> list; 
    public:
        void capNhatThoiGian();
        void addCayvaoDanhsach(CayTrong* cay);
        void xoaCaykhoiDanhsach(CayTrong* cay);
        ~DSCayTrong();
};

class VatNuoi : public TrangTrai
{
    string ten;
    float SP; 
    float SL;
    float TGTH; 
    int x, y; 
    public:
        VatNuoi();
        VatNuoi(string ten, float SP, float SL, float TGTH);
        VatNuoi(string ten, float SP);
        VatNuoi(const VatNuoi& other);
        ~VatNuoi();
        bool operator<(const VatNuoi& other);
        bool operator>(const VatNuoi& other);
        friend ostream& operator<<(ostream &out, const VatNuoi &cay);
        friend istream& operator>>(istream &in, VatNuoi &cay);
        void giamThoiGian();
        float getSP();
        int getX() const;
        int getY() const;
        void capnhatTGTH(int TGTH);
        float getTGTH();
};

class dsVatNuoi : public VatNuoi
{
    vector<VatNuoi*> list; 
    public: 
        void capNhatThoiGian();
        void addVatNuoivaoDanhSach();
        void xoaVatNuoikhoiDanhSach();
};


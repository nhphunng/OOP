#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <string>
using namespace std; 

class LyNuocCoSo
{
    private: 
        string loaiTra;
        string loaiHuongLieu; 
        float thetichMacDinh;
        float traSua;
        float luongduongMacDinh;
        float luongdaMacDinh;
        float giaCoSo;
    public: 
        LyNuocCoSo();
        LyNuocCoSo(string loaiTra, string loaiHuongLieu, float thetichMacDinh,
        float traSua, float luongduongMacDinh, float luongdaMacDinh, float giaCoSo);
        string getName() const; 
        friend ostream& operator<<(ostream& out,const LyNuocCoSo& ly);
        friend istream& operator>>(istream& in, LyNuocCoSo& ly);
        LyNuocCoSo& operator=(const LyNuocCoSo& other);
        float getTheTichMacDinh() const;
        float getGiaCoSo() const;
};

class Topping 
{
    string nameTopping; 
    float cost; 
    public:
        string getNameTopping() const
        {
            return nameTopping;
        }
        float getCost() const
        {
            return cost; 
        }
        friend istream& operator>>(istream& in, Topping& topping) 
        {
            in.ignore();
            cout << "Nhap ten topping: ";
            getline(in, topping.nameTopping);
            cout << "Nhap gia topping: ";
            in >> topping.cost;
            return in;
        }
};



class LyNuocTuyBien : public LyNuocCoSo
{
    LyNuocCoSo LoaiLyCoSo; 
    char size; 
    float luongDuong; 
    float luongDa;
    vector<Topping*> toppingList; 
    float extraCost; 
    public:
        LyNuocTuyBien();
        LyNuocTuyBien(LyNuocCoSo LyNuocCoSo, char size, float luongDuong, float luongDa, vector<Topping*> toppingList, float extraCost);
        friend ostream& operator<<(ostream& out, const LyNuocTuyBien& ly);
        friend istream& operator>>(istream& in, LyNuocTuyBien& ly);
        float getPrice();
};




class DonHang : public LyNuocTuyBien
{
    vector<LyNuocTuyBien*> ly; 
    public: 
        float total();
        void addLy(LyNuocTuyBien lynuoctuybien);
        void delLy(string delName);
        float operator-(float heso);
        ~DonHang();
};

#endif

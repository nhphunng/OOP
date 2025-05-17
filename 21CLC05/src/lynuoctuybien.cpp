#include "class.h"

LyNuocTuyBien:: LyNuocTuyBien()
{
    this->LoaiLyCoSo = LyNuocCoSo();
    this->size = ' ';
    this->luongDuong = 0; 
    this->luongDa = 0; 
    this->extraCost = 0; 
    this->toppingList.empty();
}

LyNuocTuyBien:: LyNuocTuyBien(LyNuocCoSo LyNuocCoSo, char size, float luongDuong, float luongDa, vector<Topping*> toppingList, float extraCost)
{
    this->LoaiLyCoSo = LyNuocCoSo; 
    this->size = size; 
    this->luongDuong = luongDuong;
    this->luongDa = luongDa; 
    for(auto it : toppingList)
    {
        this->toppingList.push_back(it);
    }
    this->extraCost = extraCost; 
}

ostream& operator<<(ostream& out, const LyNuocTuyBien& ly)
{
    out << ly.LoaiLyCoSo.getName() << endl;
    out << ly.size << endl; 
    out << ly.luongDuong << endl; 
    out << ly.luongDa << endl; 
    return out; 
}



istream& operator>>(istream& in, LyNuocTuyBien& ly)
{
    char c[3] = {'S', 'M', 'L'}; 
    in >> ly.LoaiLyCoSo;
    bool hople = false; 
    while (!hople)
    {
        cout << "Nhap kich co: ";
        in >> ly.size; 
        for(int i = 0; i < 3; i++)
        {
            if(ly.size == c[i])
            {
                hople = true; 
                break;   
            }
        }
        if(!hople)
            cout << "Vui long nhap lai\n";
    }

    int a[4] = {0, 50, 100, 150};
    hople = false; 
    while(!hople)
    {
        cout << "Nhap luong duong: ";
        in >> ly.luongDuong;
        for(int i = 0; i < 4; i++)
        {
            if(ly.luongDuong == a[i])
            {
                hople = 1; 
                break; 
            }
        }
        if(!hople)
            cout << "Vui long nhap lai\n";
    }
    hople = false; 
    while(!hople)
    {
        cout << "Nhap luong da: ";
        in >> ly.luongDa;
        for(int i = 0; i < 4; i++)
        {
            if(ly.luongDa == a[i])
            {
                hople = true; 
            }
        }
        if(!hople)
            cout << "Vui long nhap lai\n"; 
    }
    while(true)
    {
        Topping p1; 
        cin >> p1;  
        if(p1.getNameTopping() == "0")
            break; 
        Topping *p = new Topping(p1);
        ly.toppingList.push_back(p);
    }
    if(ly.size != 'S' && ly.size != 's')
    {
        cout << "Nhap gia phu thu: ";
        in >> ly.extraCost; 
    }
    else 
        ly.extraCost = 0; 
    return in; 
}

float LyNuocTuyBien::getPrice() {
    float total = 0; 
    total += this->LoaiLyCoSo.getGiaCoSo();
    total += this->extraCost; 
    for(auto it : this->toppingList) {
        total += it->getCost();
    }
    return total;
}


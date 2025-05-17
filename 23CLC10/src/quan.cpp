#include "class.h"

Quan::Quan()
{
    this->tenQuan = "";
    this->diachi = "";
    this->dsDoUong.empty();
}
Quan::Quan(string tenQuan, string diachi)
{
    this->tenQuan = tenQuan; 
    this->diachi = diachi;
    this->dsDoUong.empty();
}


Quan:: Quan(string tenQuan, string diachi, vector<DoUong*> dsDoUong)
{
    this->tenQuan = tenQuan; 
    this->diachi = diachi; 
    for(auto it : dsDoUong)
    {
        this->dsDoUong.push_back(it);
    }
}

bool cmp(DoUong *a, DoUong *b)
{
    return a->tongGiaTien() > b->tongGiaTien();
}

void Quan:: sortdsDoUong()
{
    sort(this->dsDoUong.begin(), this->dsDoUong.end(), cmp);
}

void Quan:: displayThongTinQuan()
{
    cout << this->tenQuan << endl; 
    cout << this->diachi << endl; 
    sortdsDoUong();
    for(auto it : this->dsDoUong)
    {
        cout << it->getTenDoUong() << endl; 
    }

}

void Quan:: themDoUong(DoUong *src)
{
    this->dsDoUong.push_back(src);
}

Quan& Quan:: operator=(const Quan& other)
{
    if(this != &other)
    {
        this->dsDoUong.empty();
        for(auto it : other.dsDoUong)
        {
            this->dsDoUong.push_back(it);
        }
    }
    return *this; 
}


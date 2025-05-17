 #include "class.h"

DongHoTheThao:: DongHoTheThao()
{
    gio = 0; 
    phut = 0; 
    giay = 0; 
    phantramGiay = 0; 
}
DongHoTheThao:: DongHoTheThao(int phut, int giay, int phantramGiay)
{
    phut = abs(phut);
    giay = abs(giay);
    phantramGiay = abs(phantramGiay);
    this->phantramGiay = phantramGiay%100; 
    this->giay = giay%60 + phantramGiay/100; 
    this->phut = (phut + giay/60)%60; 
    gio = (phut + giay/60)/60;
}

DongHoTheThao:: DongHoTheThao(int giay, int phantramGiay)
{
    giay = abs(giay);
    phantramGiay = abs(phantramGiay);
    this->phantramGiay = phantramGiay%100; 
    giay += phantramGiay/100;
    this->giay = giay%60; 
    this->phut = giay/60; 
    int phut = this->phut; 
    this->phut = phut%60; 
    this->gio = phut/60; 
}

DongHoTheThao:: DongHoTheThao(int phantramGiay)
{
    phantramGiay = abs(phantramGiay);
    this->phantramGiay = phantramGiay%100; 
    int giay = phantramGiay/60; 
    this->giay = giay%60; 
    this->phut = giay/60; 
    int phut = this->phut; 
    this->phut = phut%60; 
    this->gio = phut/60; 
}

DongHoTheThao:: DongHoTheThao(string s)
{
    stringstream ss(s);
    string phut, giay, phantramGiay;
    getline(ss, phut, ':');
    getline(ss, giay, ':');
    getline(ss, phantramGiay);

    this->phut = stoi(phut);
    this->giay = stoi(giay);
    this->phantramGiay = stoi(phantramGiay);
}

DongHoTheThao::DongHoTheThao(const DongHoTheThao& other)
{
    this->phut = other.phut; 
    this->giay = other.giay; 
    this->phantramGiay = other.phantramGiay; 
}


ostream& operator<<(ostream& out, const DongHoTheThao& src)
{
    cout << src.gio << ":" << src.phut << ":" << src.giay << ":" << src.phantramGiay; 
    return out; 
}

DongHoTheThao& DongHoTheThao:: operator=(const DongHoTheThao& other)
{
    if(this != &other)
    {
        this->phut = other.phut; 
        this->giay = other.giay; 
        this->phantramGiay = other.phantramGiay; 
    }
    return *this; 
}

DongHoTheThao* DongHoTheThao:: operator+(const DongHoTheThao& other)
{
    DongHoTheThao *DH = new DongHoTheThao(this->phut + other.phut, this->giay + other.giay, this->phantramGiay + other.phantramGiay);
    return DH; 
}

DongHoTheThao* DongHoTheThao:: operator+(int phantramGiay)
{
    DongHoTheThao *DH = new DongHoTheThao(this->phut, this->giay, this->phantramGiay + phantramGiay);
    return DH; 
}

DongHoTheThao* operator+(int phantramGiay, const DongHoTheThao& other)
{
    phantramGiay = abs(phantramGiay);
    DongHoTheThao *DH = new DongHoTheThao(other.phut, other.giay, other.phantramGiay + phantramGiay);
    return DH; 
}

DongHoTheThao& DongHoTheThao:: operator++()
{
    int giay = this->giay; 
    giay++; 
    this->giay = giay%60; 
    this->phut += giay/60; 
    return *this; 
}

DongHoTheThao DongHoTheThao:: operator++(int)
{
    DongHoTheThao result(*this);
    int giay = result.giay; 
    giay++; 
    result.giay = giay%60;
    result.phut+= giay/60;  
    return result;
}

int DongHoTheThao:: totalPTG()
{
    return this->phut*6000 + this->giay*100 + this->phantramGiay; 
}

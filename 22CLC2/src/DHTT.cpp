#include "sportClock.h"

DongHoTheThao::DongHoTheThao()
{
    this->phut = 0; 
    this->giay = 0; 
    this->phantramGiay = 0; 
}

DongHoTheThao::DongHoTheThao(int phut, int giay, int phantramGiay)
{
    phut = abs(phut);
    giay = abs(giay);
    phantramGiay = abs(phantramGiay);
    if(phantramGiay <= 100)
        this->phantramGiay = phantramGiay;
    else 
    {
        while(phantramGiay > 100)
        {
            giay += 1; 
            phantramGiay = phantramGiay - 100; 
        } 
        this->phantramGiay = phantramGiay;
    }
    if( giay <= 60)
        this->giay = abs(giay); 
    else 
    {
        while(giay > 60)
        {
            phut += 1; 
            giay -= 60;
        } 
        this->giay = giay; 
    }
    this->phut = abs(phut);   
}

DongHoTheThao::DongHoTheThao(int giay, int phantramGiay)
{
    int phut = 0; 
    giay = abs(giay);
    phantramGiay = abs(phantramGiay);
    if(phantramGiay <= 100)
        this->phantramGiay = phantramGiay;
    else 
    {
        while(phantramGiay > 100)
        {
            giay += 1; 
            phantramGiay -= 100;  
        } 
        this->phantramGiay = phantramGiay; 
    }
    if( giay <= 60)
        this->giay = abs(giay); 
    else 
    {
        while(giay > 60)
        {
            phut += 1; 
            giay = giay - 60;
        } 
        this->giay = giay; 
    }
    this->phut = phut; 
}

DongHoTheThao::DongHoTheThao(int phantramGiay)
{
    phantramGiay = abs(phantramGiay);
    int phut = 0, giay = 0; 
    if(phantramGiay <= 100)
        this->phantramGiay = phantramGiay;
    else 
    {
        while(phantramGiay > 100)
        {
            giay += 1; 
            phantramGiay -= 100; 
        } 
        this->phantramGiay = phantramGiay; 
    }
    if( giay <= 60)
        this->giay = giay; 
    else 
    {
        while(giay > 60)
        {
            phut += 1; 
            giay -= 60;
        } 
        this->giay = giay;
    }
    this->phut = phut; 
}

DongHoTheThao::DongHoTheThao(string s)
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

string DongHoTheThao::toFormat() const
{
    string s = "";
    int gio = phut / 60; 
    return to_string(gio) + "/" + (this->phut < 10 ? "0" : "") + to_string(phut%60) + "/" + (this->giay < 10 ? "0" : "") + to_string(giay) + "/"
    + (this->phantramGiay < 10 ? "0" : "") + to_string(phantramGiay);
}

void DongHoTheThao::display()
{
    int gio = phut / 60;
    cout << gio <<  phut % 60 << ":" << giay << ":" << phantramGiay << endl; 
}

DongHoTheThao DongHoTheThao::operator+(const DongHoTheThao& other)
{
    return DongHoTheThao(this->phut + other.phut, this->giay + other.giay, this->phantramGiay + other.phantramGiay);
}
DongHoTheThao DongHoTheThao::operator+(int phanTramGiay)
{
    int tmp = abs(phanTramGiay);
    return DongHoTheThao(phut, giay, this->phantramGiay + tmp);
}
DongHoTheThao operator+(int phantramGiay, const DongHoTheThao& DHTT) 
{
    phantramGiay = abs(phantramGiay);
    return DongHoTheThao(DHTT.phut, DHTT.giay, DHTT.phantramGiay + phantramGiay);
}
DongHoTheThao& DongHoTheThao::operator++()
{
    this->giay += 1; 
    return *this; 
}
DongHoTheThao& DongHoTheThao::operator=(const DongHoTheThao &other)
{
    if(this != &other)
    {
        this->phut = other.phut; 
        this->giay = other.giay; 
        this->phantramGiay = other.phantramGiay; 
    }
    return *this; 
}
DongHoTheThao DongHoTheThao::operator++(int x)
{
    DongHoTheThao result = *this;
    result.giay = result.giay + 1; 
    return result; 
}
DongHoTheThao:: ~DongHoTheThao()
{

}

int DongHoTheThao::totalPTG()
{
    return phut*60*100 + giay*100 + phantramGiay; 
}

ostream& operator<<(ostream &out, const DongHoTheThao& DHTT)
{
    out << DHTT.toFormat() << endl;
    return out;
}





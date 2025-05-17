#include "song.h"

Song::Song() : name("") , singer(""), category(UNDCATEGORIZED), license(UNKNOW), yearRelease(0), play(0){}

Song::Song(string name, string singer, Genre category, License license, int yearRelease, long long play) : name(name), singer(singer), category(category), license(license), yearRelease(yearRelease), play(play){}

string Song::getName()
{
    return name; 
}

string Song::getSinger()
{
    return singer;
}

Genre Song::getCategory()
{
    return category; 
}

License Song::getLicense()
{
    return license; 
}

int Song::getYear()
{
    return yearRelease; 
}

long long Song::getPlay()
{
    return play;
}

void Song::displaySong()
{
    cout << this->getName() << " ";
    cout << this->getSinger() << " ";
    if(this->getCategory() == 0)
        cout << "UNDCATEGORIZED";
    else if(this->getCategory() == 1)
        cout << "USUK ";
    else if(this->getCategory() == 2)
        cout << "VPOP ";
    else 
        cout << "KPOP ";
    if(this->getLicense() == 0)
        cout << "UNKNOW ";
    else if(this->getLicense() == 1)
        cout << "NON_COPYRIGHT ";
    else if(this->getLicense() == 2)
        cout << "COPYRIGHT ";
    cout << this->getYear() << " " << this->getPlay() << endl; 
}

istream& operator>>(istream& in, Song& song)
{
    cout << "Nhap ten bai hat: ";
    getline(in, song.name);
    cout << "Nhap ten ca si";
    getline(in, song.singer);
    int choice1; 
    cout << "Nhap the loai: " << endl; 
    cout << "0. UNCATEGORIZED \n";
    cout << "1. USUK \n";
    cout << "2. VPOP \n";
    cout << "3. KPOP \n";
    cin >> choice1; 
    int choice2; 
    cout << "Nhap ban quyen: " << endl; 
    cout << "0. UNKNOW \n";
    cout << "1. NON_COPYRIGHT \n";
    cout << "2. COPYRIGHT \n";
    cin >> choice2;
    cout << "Nhap nam phat hanh: ";
    cin >> song.yearRelease; 
    cout << "Nhap so luot phat: ";
    cin >> song.play; 
    return in; 
}



CopyRightSong:: CopyRightSong(): Song("", "", UNDCATEGORIZED, COPYRIGHT, 0, 0){}

CopyRightSong::CopyRightSong(string name, string singer, Genre category, License license, int yearRelease, long long play) : Song(name, singer, category, license, yearRelease, play){}

NonCopyRightSong:: NonCopyRightSong() : Song("", "", UNDCATEGORIZED, NON_COPYRIGHT, 0, 0), price(0){}

NonCopyRightSong::NonCopyRightSong(string name, string singer, Genre category, License license, int yearRelease, long long play, float price) : Song(name, singer, category, license, yearRelease, play),price(price){}




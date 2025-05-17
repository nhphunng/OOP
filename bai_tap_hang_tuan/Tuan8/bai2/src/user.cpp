#include "user.h"

User::User()
{
    ID = "";
    password = "";
    balance = 0; 
}

User::User(string ID, string password, double balance)
{
    this->ID = ID; 
    this->password = password; 
    this->balance = balance; 
}

void User::addLikedSong(Song *song)
{
    likedSong.push_back(song);
}

void User::addPaidSong(Song *song)
{
    paidSong.push_back(song);
}

void User::getLikedSong()
{
    for(int i = 0; i < likedSong.size(); i++)
    {
        cout << likedSong[i]->getName() << " ";
        cout << likedSong[i]->getSinger() << " ";
        cout << to_string(likedSong[i]->getCategory()) << " ";
        cout << to_string(likedSong[i]->getLicense()) << " ";
        cout << likedSong[i]->getYear() << " " << likedSong[i]->getPlay() << endl;  
    }
}

void User::getPaidSong()
{
    for(int i = 0; i < likedSong.size(); i++)
    {
        cout << paidSong[i]->getName() << " ";
        cout << paidSong[i]->getSinger() << " ";
        cout << to_string(paidSong[i]->getCategory()) << " ";
        cout << to_string(paidSong[i]->getLicense()) << " ";
        cout << paidSong[i]->getYear() << " " << paidSong[i]->getPlay() << endl;  
    }
}

User::~User()
{
    for(int i = 0; i < likedSong.size(); i++)
    {
        delete likedSong[i];
    }
    likedSong.clear();

    for(int i = 0; i < paidSong.size(); i++)
    {
        delete paidSong[i];
    }
    paidSong.clear();
}

NormalUser::NormalUser():User(){}
NormalUser::NormalUser(string ID, string password, double balance):User(ID, password, balance){}

VipUser::VipUser():User(){}
VipUser::VipUser(string ID, string password, double balance, double discountRate, double duration, double fee):User(ID, password, balance), discountRate(discountRate), duration(duration), fee(fee){}

bool User:: checkPassword(string password)
{
    if(password.length() > 8)
        return false; 
    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] == ' ')
            return false; 
    }
    return this->password == password; 
}
bool User:: checkID(string ID)
{
    return this->ID == ID; 
}

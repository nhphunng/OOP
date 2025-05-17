#ifndef USER_H
#define USER_H
#include "song.h"
using namespace std; 

class Song; 
class SongList; 

class User
{
    string ID; 
    string password; 
    double balance; 
    vector<Song*> likedSong; 
    vector<Song*> paidSong;
    SongList *songList; 
    public:
        User();
        User(string ID, string password, double balance);
        void addLikedSong(Song *song);
        void addPaidSong(Song *song);
        void getLikedSong();
        void getPaidSong();
        bool checkPassword(string password);
        bool checkID(string ID);
        ~User();
};

class NormalUser : public User
{
    public: 
        NormalUser();
        NormalUser(string ID, string password, double balance);

};

class VipUser : public User
{
    double discountRate;
    double duration; 
    double fee; 
    public: 
        VipUser();
        VipUser(string ID, string password, double balance, double discountRate, double duration, double fee);
        void getMostPlaySong(Genre genre);

};
#endif
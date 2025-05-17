#ifndef SONG_H
#define SONG_H

#include <iostream> 
#include <string>
#include <vector> 
using namespace std; 

enum Genre {UNDCATEGORIZED,USUK, VPOP, KPOP};
enum License{UNKNOW, NON_COPYRIGHT, COPYRIGHT};

class Song
{
    string name; 
    string singer; 
    Genre category;
    License license; 
    int yearRelease; 
    long long play;
    public:
        Song();
        Song(string name, string singer, Genre category, License license, int yearRelease, long long play);
        string getName();
        string getSinger();
        Genre getCategory();
        License getLicense();
        int getYear();
        long long getPlay(); 
        friend istream& operator>>(istream& in, Song& song);
        void displaySong();
};

class CopyRightSong : public Song
{
    public:
        CopyRightSong();
        CopyRightSong(string name, string singer, Genre category, License license, int yearRelease, long long play);
};

class NonCopyRightSong : public Song
{
    float price; 
    public: 
        NonCopyRightSong();
        NonCopyRightSong(string name, string singer, Genre category, License license, int yearRelease, long long play, float price);
        NonCopyRightSong(const NonCopyRightSong& s);
};

#endif
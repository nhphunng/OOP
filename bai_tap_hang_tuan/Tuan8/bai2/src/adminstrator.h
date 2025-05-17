#ifndef ADMINSTRATOR_H
#define ADMINSTRATOR_H
#include "song.h"
#include "user.h"
#include "songList.h"

class Song; 
class User; 
class SongList; 

class Adminstrator 
{
    vector<User> userList; 
    SongList *songList; 
    public: 
        Adminstrator();
        void addSong(Song *song, SongList& list); 
        void delSong(SongList &list, Song *song);
        void addSong_console(SongList &list);
        User* signIn(string ID, string password);
        void signOut(string ID, string password);
        void getMostPlaySong(Genre genre);
};

#endif

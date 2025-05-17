#ifndef SONGLIST_H
#define SONGLIST_H

#include "song.h"
#include "adminstrator.h"
#include "user.h"

class Song; 
class Adminstrator; 
class User; 
class VipUser; 

class SongList
{
    vector<Song> list; 
    void getMostPlaySong(Genre genre);
    public:
        void getAllSong();
        void getTop5Song();
    friend class Adminstrator;
    friend void VipUser::getMostPlaySong(Genre genre);
};

#endif
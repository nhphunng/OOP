#include "adminstrator.h"

Adminstrator::Adminstrator(){};

void Adminstrator::addSong(Song *song, SongList& list)
{
    list.list.push_back(*song);
}

void Adminstrator::delSong(SongList &list, Song *song)
{
    for(int i = 0; i < list.list.size(); i++)
    {
        if(list.list[i].getName() == song->getName())
        {
            list.list.erase(list.list.begin() + i);
        }
    }
}

void  Adminstrator::addSong_console(SongList &list)
{
    Song song; 
    cin >> song; 
    list.list.push_back(song);
}

User* Adminstrator::signIn(string ID, string password)
{
    for(int i = 0; i < this->userList.size(); i++)
    {
        if(userList[i].checkID(ID) && userList[i].checkPassword(password))
            return &userList[i]; 
    }
    return NULL; 
}

void Adminstrator::signOut(string ID, string password)
{
    User nUser(ID, password, 0);
    userList.push_back(nUser); 
}

void Adminstrator::getMostPlaySong(Genre genre)
{
    songList->getMostPlaySong(genre);
}
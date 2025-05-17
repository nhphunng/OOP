#include "songList.h"

void SongList:: getAllSong()
{
    for(int i = 0; i < list.size(); i++)
    {
        list[i].displaySong();
    }
}

bool cmp(Song a, Song b)
{
    return a.getPlay() > b.getPlay();
}

void SongList:: getTop5Song()
{
    sort(list.begin(), list.end(), cmp);
    for(int i = 0; i < 5; i++)
    {
        list[i].displaySong();
    }
}

void SongList::getMostPlaySong(Genre genre)
{
    sort(list.begin(), list.end(), cmp);
    for(int i = 0; i < list.size(); i++)
    {
        if(list[i].getCategory() == genre)
        {
            list[i].displaySong();
            break; 
        }
    }
}
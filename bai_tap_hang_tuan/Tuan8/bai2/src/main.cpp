#include <iostream>
#include <fstream>
#include "song.h"
#include "songList.h"
#include "user.h"
#include "adminstrator.h"

using namespace std;

int main() {
    SongList song_list;
    Adminstrator admin;

    // Read songs from songlist.txt
    ifstream file("songlist.txt");
    if (!file.is_open()) {
        cerr << "Could not open the file!" << endl;
        return 1;
    }

    // Populate the song list from file
    string name, singer, categoryStr, licenseStr;
    int year;
    long long plays;
    while (getline(file, name,',')) {
        // Read singer and other details
        getline(file, singer, ',');
        getline(file, categoryStr, ',');
        getline(file, licenseStr, ',');
        file >> year; 
        file.ignore();
        file >> plays;

        Genre category = UNDCATEGORIZED;
        if (categoryStr == "VPOP") category = VPOP;
        else if (categoryStr == "KPOP") category = KPOP;
        else if (categoryStr == "USUK") category = USUK;

        License license = NON_COPYRIGHT;
        if (licenseStr == "COPYRIGHT") license = COPYRIGHT;

        // Create a new Song object
        Song *newSong = new Song(name, singer, category, license, year, plays);
        admin.addSong(newSong, song_list);
    }
    file.close();

    // Display all songs
    cout << "All Songs:" << endl;
    song_list.getAllSong();

    // Test getting top 5 songs
    cout << "\nTop 5 Songs:" << endl;
    song_list.getTop5Song();

    // Test getting most played song in a specific genre
    cout << "\nMost Played VPOP Song:" << endl;
    //admin.getMostPlaySong(VPOP);

    return 0;
}
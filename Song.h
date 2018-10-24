//
// Created by Andrew on 10/24/2018.
//


#include <iostream>

#ifndef ASSIGNMENT5_SONG_H
#define ASSIGNMENT5_SONG_H

//Song class declaration
using namespace std;

class Song{

private:
    string title;
    string artist;
    int size;

public:
    Song(string title, string artist, int size);
    ~Song();

    string getTitle();
    void setTitle(string title);

    string getArtist() const;
    void setArtist(string artist);

    int getSize() const;
    void setSize(int size);

};

#endif //ASSIGNMENT5_SONG_H


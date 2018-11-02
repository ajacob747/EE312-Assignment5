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
    //default constructor
    Song();
    //constructor
    Song(string title, string artist, int size);
    //destructor
    ~Song();

    //function returns title of song
    string getTitle();

    //function sets title of song
    void setTitle(string title);

    //function returns artist of song
    string getArtist() const;

    //function sets artist of song
    void setArtist(string artist);

    //function gets Size of song
    int getSize() const;

    //function setsSize of song
    void setSize(int size);

    //override equals
    bool operator == (Song const &rhs);
    //override less than
    bool operator < (Song const &rhs);
    //override greater than
    bool operator > (Song const &rhs);
};

#endif //ASSIGNMENT5_SONG_H


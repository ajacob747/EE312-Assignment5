//
// Created by Andrew on 10/24/2018.
//

#include "Song.h";
 using namespace std;
    Song::Song(string title, string artist, int size) {
        this->title = title;
        this->artist = artist;
        this->size = size;
    }
    void Song::setTitle(string title){
        this->title = title;
    }
    string Song::getArtist() const{
        return artist;
    }

    void Song::setArtist(string artist){
        this->artist = artist;
    }
    int Song::getSize() const{
        return size;
    }
    void Song::setSize(int size){
        this->size = size;
    }
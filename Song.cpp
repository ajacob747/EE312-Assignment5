//
// Created by Andrew on 10/24/2018.
//

#include "Song.h"
 using namespace std;
    Song::Song(){
        title = "";
        artist = "";
        size = 0;
    }
    Song::Song(string title, string artist, int size) {
        this->title = title;
        this->artist = artist;
        this->size = size;
    }
    Song::~Song(){
        
    }
    string Song::getTitle() {
        return title;
    }
    void Song::setTitle(string title){
        this->title = title;
    }
    string Song::getArtist() const {
        return artist;
    }

    void Song::setArtist(string artist) {
        this->artist = artist;
    }
    int Song::getSize() const{
        return size;
    }
    void Song::setSize(int size) {
        this->size = size;
    }
    bool Song::operator==(Song const &rhs) {
        if(this-> artist == rhs.artist && this->title == rhs.title && this->size == rhs.size)
            return true;
        return false;
    }
    bool Song::operator>(Song const &rhs) {
        if (this->artist > rhs.artist)
            return true;
        else if (this->artist == rhs.artist) {
            if (this->title > rhs.title)
                return true;
            else if (this->title == rhs.title) {
                if (this->size > rhs.size)
                    return true;
            }
        }
        return false;
    }

    bool Song::operator<(Song const &rhs){
        if (this->artist < rhs.artist)
            return true;
        else if (this->artist == rhs.artist) {
            if (this->title < rhs.title)
                return true;
            else if (this->title == rhs.title) {
                if (this->size < rhs.size)
                    return true;
            }
        }
        return false;
    }
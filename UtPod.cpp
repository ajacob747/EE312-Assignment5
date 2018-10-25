//
// Created by Andrew on 10/24/2018.
//

#include "UtPod.h"
#include "Song.h"
#include <iostream>

    UtPod::UtPod() {

    }
    UtPod::UtPod(int size) {
        if(size>MAX_MEMORY || size<=0)
            memSize = MAX_MEMORY;
        else
            memSize = size;
        songs == NULL;
    }
    int UtPod::addSong(Song const &s) {
//      if (s.getSize()>getRemainingMemory())
//            return NO_MEMORY;
        SongNode *newSong = new SongNode;
        newSong->s = s;
        newSong->next = NULL;
        SongNode *tracker = songs;

        if(tracker == NULL)
            songs = newSong;
        else {
            while (tracker->next != NULL)
                tracker = tracker->next;
            tracker->next = newSong;
        }
    }

    int UtPod::removeSong(Song const &s) {
        SongNode *tracker = songs;
        SongNode *trail = NULL;

        if(tracker != NULL && tracker->s == s){
            songs = tracker->next;
            delete(tracker);
            return SUCCESS;
        }
        bool found = false;

        while(found==false && tracker!=NULL){
            trail = tracker;
            tracker = tracker->next;
            if(tracker!=NULL && tracker->s == s){
                found = true;
            }
        }
        if(tracker == NULL)
            return NOT_FOUND;
        trail->next = tracker->next;
        delete(tracker);
        return SUCCESS;
    }

    void UtPod::shuffle() {
        if(songs == NULL)
            return;
        int songNumber = getNumSongs();
        for(int i = 0; i<songNumber*2; i++){
            SongNode *track1 = songs;
            SongNode *track2 = songs;
            int swap1 = rand()%songNumber;
            int swap2 = rand()%songNumber;
            if (swap1!=swap2){
                for(int j = 0; j<swap1; j++)
                    track1 = track1->next;
                for(int j = 0; j<swap2; j++)
                    track2 = track2->next;
                Song *temp = new Song;
                *temp = track1->s;
                track1->s = track2->s;
                track2->s = *temp;
                delete(temp);
            }

        }
    }
    void UtPod::showSongList() {
        SongNode *tracker = songs;
        while(tracker!=NULL){
            cout<<tracker->s.getTitle()+" "+ tracker->s.getArtist()+" "+tracker->s.getTitle()<<endl;
            tracker = tracker->next;
        }
    }

    void UtPod::sortSongList() {
        if (songs == NULL)
            return;
        int numSongs = getNumSongs();
        Song *songList = new Song[numSongs];
        SongNode *tracker = songs;
        int i = 0;
        while (tracker != NULL) {
            songList[i] = tracker->s;
            tracker = tracker->next;
        }
    }

        int UtPod::getNumSongs() {
            SongNode *tracker = songs;
            if (songs == NULL)
                return 0;
            int songNumber = 0;
            while (tracker != NULL) {
                songNumber++;
                tracker = tracker->next;
            }
            return songNumber;
        }


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
        if (s.getSize()>getRemainingMemory())
            return NO_MEMORY;
        SongNode *newSong;
        newSong->s = s;
        newSong->next = NULL;
        SongNode *tracker = songs;

        if(tracker == NULL)
            tracker = newSong;
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
            if(tracker->s == s){
                found = true;
            }
        }
        if(tracker == NULL)
            return NOT_FOUND;
        trail->next = tracker->next;
        delete(tracker);
    }

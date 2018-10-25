//
// Created by Andrew on 10/24/2018.
//

#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;
int main() {
    UtPod *hi = new UtPod(512);
    Song *firstSong = new Song("hello", "world", 1);
    Song *secondSong = new Song("test", "test",1);
    Song *thirdSong = new Song("test2", "test",1);
    Song *fourthSong = new Song("test3", "test2",1);
    hi->addSong(*firstSong);
    hi->addSong(*secondSong);
    hi->addSong(*thirdSong);
    hi->addSong(*fourthSong);
    hi->showSongList();
    cout <<"\n";
    hi->removeSong(*firstSong);
    hi->removeSong(*firstSong);
    hi->showSongList();
    cout <<"\n";
    hi->shuffle();
    hi->showSongList();
}
//
// Created by Andrew on 10/24/2018.
//

#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;
int main() {
    UtPod *hi = new UtPod(512);
    Song *firstSong = new Song("hello", "aorld", 1);
    Song *secondSong = new Song("test", "test3",1);
    Song *thirdSong = new Song("test2", "test1",1);
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
    hi->addSong(*firstSong);
    hi->sortSongList();
    hi->showSongList();
    cout <<"\n";
    hi->shuffle();
    hi->showSongList();
    int total;
    total = hi->getTotalMemory();
    cout<< "\n"+to_string(total)+"\n";
    int left = hi->getRemainingMemory();
    cout<< to_string(left)+"\n";
    hi->clearMemory();
    hi->showSongList();
    left = hi->getRemainingMemory();
    cout<<to_string(left)+"\n";

}
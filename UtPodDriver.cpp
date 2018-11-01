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
    //add song test
    hi->addSong(*firstSong);
    hi->addSong(*secondSong);
    hi->addSong(*thirdSong);
    hi->addSong(*fourthSong);
    hi->showSongList();
    cout <<"\n";
    //remove song test
    hi->removeSong(*firstSong);
    //remove song not in list
    hi->removeSong(*firstSong);
    hi->showSongList();
    cout <<"\n";
    hi->addSong(*firstSong);
    //sort test
    hi->sortSongList();
    hi->showSongList();
    cout <<"\n";
    //shuffle test
    hi->shuffle();
    hi->showSongList();
    int total;
    //total memory test
    total = hi->getTotalMemory();
    cout<< "\n"+to_string(total)+"\n";
    //remaining memory test
    int left = hi->getRemainingMemory();
    cout<< to_string(left)+"\n";
    //clear memory test
    hi->clearMemory();
    hi->showSongList();
    //get remaining memory of empty list
    left = hi->getRemainingMemory();
    cout<<to_string(left)+"\n";
    //adding after clear memory
    hi->addSong(*firstSong);
    hi->showSongList();
    cout<<"\n";
    //delete test
    delete hi;

    // given tests
    UtPod t;

    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;

    //clear memory with one element list
    t.clearMemory();
    t.showSongList();
    //clear memory empty list;
    t.clearMemory();
    t.showSongList();

    //adding song of max mem
    Song s6("Beatles", "Hey Jude6", 512);
    t.addSong(s6);
    t.showSongList();
    //adding song which goes above max memory
    result = t.addSong(s1);
    cout << "add result= " << result << endl;
    t.showSongList();

    t.clearMemory();

    t.addSong(s4);
    t.addSong(s3);
    t.addSong(s2);
    t.addSong(s5);
    t.addSong(s1);
    Song s7("Beatles", "Hey Jude4", 2);
    t.addSong(s7);
    Song s8("Beatles", "Hey Jude2",5);
    t.addSong(s8);
    cout << '\n';
    //larger sort
    t.sortSongList();
    t.showSongList();
    cout << '\n';
    //another shuffle
    t.shuffle();
    t.showSongList();
    t.removeSong(s1);
    t.removeSong(s2);
    t.removeSong(s3);
    t.removeSong(s4);
    t.removeSong(s5);
    t.removeSong(s6);
    t.removeSong(s7);
    cout << '\n';
    t.showSongList();
    //shuffle and sort with one element
    t.sortSongList();
    t.shuffle();
    t.showSongList();
    t.clearMemory();
    t.sortSongList();
    t.showSongList();
    // shuffle and sort with 0 elements;
    t.shuffle();
    t.showSongList();
    t.~UtPod();

    //create UtPod of different Size
    UtPod s(256);
    //add song too big
    result = s.addSong(s6);
    cout <<result;
    result = s.getRemainingMemory();
    cout <<result;
    delete firstSong;
    delete secondSong;
    delete thirdSong;
    delete fourthSong;
}
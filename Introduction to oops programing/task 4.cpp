#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
    string songs[3];
    int count;

    Playlist(string n, string date, bool pub) {
        name = n;
        createdOn = date;
        isPublic = pub;
        count = 0;
    }

    void addSong(string songTitle) {
        songs[count] = songTitle;
        count++;
    }

    void showSongs() {
        for(int i = 0; i < count; i++) {
            cout << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p1("My Songs", "06-07-2026", true);

    p1.addSong("Song One");
    p1.addSong("Song Two");
    p1.addSong("Song Three");

    p1.showSongs();

    return 0;
}
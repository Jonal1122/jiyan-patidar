#include <iostream>
using namespace std;

class MusicPlayer {
public:
    virtual void play(string song) {
        cout << "Playing: " << song << endl;
    }
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(string song) {
        cout << "Streaming on Spotify: " << song << endl;
    }
};

int main() {
    MusicPlayer *player;
    SpotifyPlayer spotify;

    player = &spotify;

    player->play("Believer");

    return 0;
}
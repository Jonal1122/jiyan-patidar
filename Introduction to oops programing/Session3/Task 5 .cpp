#include <iostream>
#include <fstream>
using namespace std;

class Playlist {
public:
    string name;

    Playlist(string n) {
        name = n;
        cout << "Playlist created." << endl;
    }

    ~Playlist() {
        ofstream file("autosave.txt");
        file << "Playlist Name: " << name;
        file.close();

        cout << "Playlist auto-saved to autosave.txt" << endl;
    }
};

int main() {
    Playlist p1("My Favourites");

    return 0;
}
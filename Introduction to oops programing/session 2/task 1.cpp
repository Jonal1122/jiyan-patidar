#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool pub) {
        name = n;
        createdOn = date;
        isPublic = pub;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Is Public: " << isPublic << endl;
    }
};

int main() {
    Playlist p1("My Songs", "06-07-2026", true);
    p1.display();

    return 0;
}
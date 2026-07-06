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

    void togglePublic() {
        isPublic = !isPublic;
    }
};

int main() {
    Playlist p1("My Songs", "06-07-2026", true);

    p1.togglePublic();
    cout << "After first toggle: " << p1.isPublic << endl;

    p1.togglePublic();
    cout << "After second toggle: " << p1.isPublic << endl;

    return 0;
}
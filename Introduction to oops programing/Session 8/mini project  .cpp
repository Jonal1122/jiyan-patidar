#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content {
public:
    string title;
    string platform;
    int views;
    string status;

    void input() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter platform: ";
        getline(cin, platform);

        cout << "Enter views: ";
        cin >> views;

        cout << "Enter status: ";
        cin.ignore();
        getline(cin, status);
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

void addContent() {
    Content c;
    c.input();

    ofstream file("content_list.txt", ios::app);

    file << c.title << endl;
    file << c.platform << endl;
    file << c.views << endl;
    file << c.status << endl;

    file.close();

    cout << "Content added successfully.\n";
}

int showContent() {
    ifstream file("content_list.txt");

    Content c;
    int count = 0;

    cout << "\nContent List:\n";

    while (getline(file, c.title)) {
        getline(file, c.platform);
        file >> c.views;
        file.ignore();
        getline(file, c.status);

        count++;

        cout << count << ". " << c.title << " - " << c.platform << endl;
    }

    file.close();

    return count;
}

void updateStatus() {
    Content arr[50];
    int count = 0;
    int choice;

    ifstream file("content_list.txt");

    while (getline(file, arr[count].title)) {
        getline(file, arr[count].platform);
        file >> arr[count].views;
        file.ignore();
        getline(file, arr[count].status);
        count++;
    }

    file.close();

    showContent();

    cout << "Enter content number to update status: ";
    cin >> choice;

    if (choice >= 1 && choice <= count) {
        cout << "Enter new status: ";
        cin.ignore();
        getline(cin, arr[choice - 1].status);

        ofstream outFile("content_list.txt");

        for (int i = 0; i < count; i++) {
            outFile << arr[i].title << endl;
            outFile << arr[i].platform << endl;
            outFile << arr[i].views << endl;
            outFile << arr[i].status << endl;
        }

        outFile.close();

        cout << "Status updated successfully.\n";
    } else {
        cout << "Invalid number.\n";
    }
}

void deleteContent() {
    Content arr[50];
    int count = 0;
    int choice;

    ifstream file("content_list.txt");

    while (getline(file, arr[count].title)) {
        getline(file, arr[count].platform);
        file >> arr[count].views;
        file.ignore();
        getline(file, arr[count].status);
        count++;
    }

    file.close();

    showContent();

    cout << "Enter content number to delete: ";
    cin >> choice;

    if (choice >= 1 && choice <= count) {
        ofstream outFile("content_list.txt");

        for (int i = 0; i < count; i++) {
            if (i != choice - 1) {
                outFile << arr[i].title << endl;
                outFile << arr[i].platform << endl;
                outFile << arr[i].views << endl;
                outFile << arr[i].status << endl;
            }
        }

        outFile.close();

        cout << "Content deleted successfully.\n";

        showContent();
    } else {
        cout << "Invalid number.\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- Content Manager ---\n";
        cout << "1. Add Content\n";
        cout << "2. Show Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContent();
                break;

            case 2:
                showContent();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                deleteContent();
                break;

            case 5:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
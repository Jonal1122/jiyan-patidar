#include <iostream>
using namespace std;

class FlipkartSearch {
public:
    void searchProduct(string productName) {
        cout << "Searching product: " << productName << endl;
    }

    void searchProduct(string productName, string category) {
        cout << "Searching product: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main() {
    FlipkartSearch f;

    f.searchProduct("Samsung Phone");
    f.searchProduct("Shoes", "Fashion");

    return 0;
}
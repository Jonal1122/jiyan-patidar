#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name, bool delivered) {
        orderId = id;
        restaurantName = name;
        isDelivered = delivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order delivered successfully" << endl;
    }
};

int main() {
    FoodOrder order1(101, "Dominos", false);
    order1.markDelivered();

    return 0;
}
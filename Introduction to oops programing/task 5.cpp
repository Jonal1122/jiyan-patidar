#include <iostream>
using namespace std;

class FoodOrderData {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(FoodOrderData data) {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    void display() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant Name: " << restaurantName << endl;
        cout << "Delivered: " << isDelivered << endl;
    }
};

int main() {
    FoodOrderData data;
    data.orderId = 101;
    data.restaurantName = "Dominos";
    data.isDelivered = false;

    FoodOrder order1(data);
    order1.display();

    return 0;
}
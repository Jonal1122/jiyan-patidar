#include <iostream>
using namespace std;

class PaymentProcessor {
public:
    void processPayment(float amount) {
        cout << "Payment without coupon" << endl;
        cout << "Final Amount: " << amount << endl;
    }

    void processPayment(float amount, string couponCode) {
        amount = amount - 100;
        cout << "Payment with coupon: " << couponCode << endl;
        cout << "Final Amount: " << amount << endl;
    }
};

int main() {
    PaymentProcessor p;

    p.processPayment(1000);
    p.processPayment(1000, "SAVE100");

    return 0;
}
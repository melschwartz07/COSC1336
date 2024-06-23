// Melanie Schwartz
// Assignment 6
// 6/22/2024

#include <iostream>
#include <iomanip>

using namespace std;

void calculate() {
    int quantity;
    const double unitPrice = 99.0;
    double discount = 0.0;
    double beforeDiscount;
    double afterDiscount;

    while (true) {
        cout << "Enter the quantity ordered: ";
        cin >> quantity;

        if (quantity > 0) {
            break;
        } else {
            cout << "Quantity must be greater than 0." << endl;
        }
    }

    if (quantity >= 10 && quantity <= 19) {
        discount = 0.20;
    } else if (quantity >= 20 && quantity <= 49) {
        discount = 0.30;
    } else if (quantity >= 50 && quantity <= 99) {
        discount = 0.40;
    } else if (quantity >= 100) {
        discount = 0.50;
    }

    beforeDiscount = unitPrice * quantity;
    double discountPerc = beforeDiscount * discount;
    afterDiscount = beforeDiscount - discountPerc;

    cout << fixed << setprecision(2);
    cout << "Quantity Ordered: " << quantity << endl;
    cout << "Percent Discount for this quantity: " << discount * 100 << "%" << endl;
    cout << "Price before Discount: $" << beforeDiscount << endl;
    cout << "Price after Discount: $" << afterDiscount << endl;
}

int main() {
    calculate();
    return 0;
}

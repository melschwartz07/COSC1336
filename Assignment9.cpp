// Melanie Schwartz
// Assignment 9
// 6/29/2024

#include <iostream>
#include <iomanip>

double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost + (wholesaleCost * (markupPercentage / 100));
}

int main() {
    double wholesaleCost, markupPercentage;

    // Input validation - wholesale cost
    do {
        std::cout << "Enter the item's wholesale cost: ";
        std::cin >> wholesaleCost;
        if (wholesaleCost < 0) {
            std::cout << "Wholesale cost cannot be negative. Please try again.\n";
        }
    } while (wholesaleCost < 0);

    // Input validation - markup percentage
    do {
        std::cout << "Enter the item's markup percentage: ";
        std::cin >> markupPercentage;
        if (markupPercentage < 0) {
            std::cout << "Markup percentage cannot be negative. Please try again.\n";
        }
    } while (markupPercentage < 0);

    // Calculate and display retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The item's retail price is $" << retailPrice << std::endl;

    return 0;
}

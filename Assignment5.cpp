// Melanie Schwartz
// Assignment 5
// 6/14/2024

#include <iostream>
using namespace std;

int main() {
    // Define variables
    double num1, num2;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Use conditional operator to determine larger/smaller number
    double larger = (num1 > num2) ? num1 : num2;
    double smaller = (num1 < num2) ? num1 : num2;

    // Display the results
    cout << "The smaller number is " << smaller << endl;
    cout << "The larger number is " << larger << endl;

    return 0;
}

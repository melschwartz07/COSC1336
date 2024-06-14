// Melanie Schwartz
// Assignment # 3
// 6/13/2024

#include <iostream>
using namespace std;

int main() {
    // define variables
    double gallons;
    double miles;

    // Prompt user's input
    cout << "Enter the number of gallons the car can hold: ";
    cin >> gallons;
    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> miles;

    // perform MPG calculation
    if (gallons != 0) {
        double milesPerGallon = miles / gallons;
        // Result - user cannot enter 0
        cout << "The car's gas MPG is " << milesPerGallon << "." << endl;
    } else {
        cout << "The number of gallons cannot be zero." << endl;
    }
    return 0;
}

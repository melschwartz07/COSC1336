// Melanie Schwartz
// Assignment 4
// 6/14/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Define variables
    double score1, score2, score3, score4, score5;

    // Prompt user for input
    cout << "Enter the first test score: ";
    cin >> score1;
    cout << "Enter the second test score: ";
    cin >> score2;
    cout << "Enter the third test score: ";
    cin >> score3;
    cout << "Enter the fourth test score: ";
    cin >> score4;
    cout << "Enter the fifth test score: ";
    cin >> score5;

    // Test average calculation
    double average = (score1 + score2 + score3 + score4 + score5) / 5.0;

    // Display the average in fixed-point notation to one decimal
    cout << fixed << setprecision(1);
    cout << "The average test score is " << average << endl;

    return 0;
}

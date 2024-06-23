// Melanie Schwartz
// Assignment 7
// 6/23/2024

#include <iostream>
#include <string>

using namespace std;

void studentLineup() {
    int numStudents;
    string name, firstStudent, lastStudent;

    // Input validation - cannot be 0
    while (true) {
        cout << "Enter the number of students (1-25): ";
        cin >> numStudents;
        if (numStudents >= 1 && numStudents <= 25) {
            break;
        } else {
            cout << "Number of students cannot be 0. Enter a number between 1 and 25." << endl;
        }
    }

    // Read student names
    cout << "Enter the first names of the students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cin >> name;
        if (i == 0) {
            firstStudent = name;
            lastStudent = name;
        } else {
            if (name < firstStudent) {
                firstStudent = name;
            }
            if (name > lastStudent) {
                lastStudent = name;
            }
        }
    }

    // Output the names of the first and last student in alphabetical order
    cout << "The student at the front of the line is: " << firstStudent << endl;
    cout << "The student at the end of the line is: " << lastStudent << endl;
}

int main() {
    studentLineup();
    return 0;
}

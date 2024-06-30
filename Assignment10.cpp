// Melanie Schwartz
// Assignment 10
// 6/30/2024

#include <iostream>
#include <iomanip>

// Function prototypes for calculations
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges);
double calculateCharges(double medicationCharges, double serviceCharges);

int main() {
    char patientType;
    std::cout << "Enter (I) for in-patient stay or (O) for out-patient: ";
    std::cin >> patientType;

    // Input validation for patient type
    // handle uppercase and lowercase inputs
    while (patientType != 'I' && patientType != 'O' && patientType != 'i' && patientType != 'o') {
        std::cout << "Invalid input. Enter 'I' for in-patient or 'O' for out-patient: ";
        std::cin >> patientType;
    }

    int days;

    // Input validation for number of days
    do {
        std::cout << "Enter the number of days spent in the hospital: ";
        std::cin >> days;
        if (days < 0) std::cout << "Number of days cannot be negative.\n";
    } while (days < 0);

    if (patientType == 'I' || patientType == 'i') {
        double dailyRate, medicationCharges, serviceCharges;

        // Input for in-patient data with validation
        do {
            std::cout << "Enter the daily rate: ";
            std::cin >> dailyRate;
            if (dailyRate < 0) std::cout << "Daily rate cannot be negative.\n";
        } while (dailyRate < 0);

        do {
            std::cout << "Enter the hospital medication charges: ";
            std::cin >> medicationCharges;
            if (medicationCharges < 0) std::cout << "Medication charges cannot be negative.\n";
        } while (medicationCharges < 0);

        do {
            std::cout << "Enter the charges for hospital services: ";
            std::cin >> serviceCharges;
            if (serviceCharges < 0) std::cout << "Service charges cannot be negative.\n";
        } while (serviceCharges < 0);

        // Calculate total charges for in-patient
        double totalCharges = calculateCharges(days, dailyRate, medicationCharges, serviceCharges);
        std::cout << "The total charges for the in-patient stay: $" << std::fixed << std::setprecision(2) << totalCharges << std::endl;

    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCharges, serviceCharges;

        // Input for out-patient data with validation
        do {
            std::cout << "Enter the hospital medication charges: ";
            std::cin >> medicationCharges;
            if (medicationCharges < 0) std::cout << "Medication charges cannot be negative.\n";
        } while (medicationCharges < 0);

        do {
            std::cout << "Enter the charges for hospital services: ";
            std::cin >> serviceCharges;
            if (serviceCharges < 0) std::cout << "Service charges cannot be negative.\n";
        } while (serviceCharges < 0);

        // total charges for out-patient
        double totalCharges = calculateCharges(medicationCharges, serviceCharges);
        std::cout << "The total charges for the out-patient: $" << std::fixed << std::setprecision(2) << totalCharges << std::endl;
    }

    return 0;
}

// Overloaded function for in-patient charges
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    return (days * dailyRate) + medicationCharges + serviceCharges;
}

// Overloaded function for out-patient charges
double calculateCharges(double medicationCharges, double serviceCharges) {
    return medicationCharges + serviceCharges;
}
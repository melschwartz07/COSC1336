// Melanie Schwartz
// Assignment # 8
// 6/29/2024

#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

int main() {
    // error handling for reading input file
    std::ifstream inputFile("./Random.txt");
    if (!inputFile) {
        std::cerr << "Unable to open file";
        return 1;
    }

    // initialize vector
    std::vector<int> numbers;
    int number;

    // Read numbers from the file and store them in vector
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    inputFile.close();

    // Calculate the count - sum - and average
    int count = numbers.size();
    int totalSum = std::accumulate(numbers.begin(), numbers.end(), 0);
    double average = (count != 0) ? static_cast<double>(totalSum) / count : 0;

    // Display the results
    std::cout << "Final count of numbers in file: " << count << std::endl;
    std::cout << "Sum of numbers in file: " << totalSum << std::endl;
    std::cout << "Average of numbers in file: " << average << std::endl;

    return 0;
}

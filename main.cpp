#include <iostream>
#include "BubbleSort.cpp"

int main() {
    // Create an instance of BubbleSort
    BubbleSort bubbleSort;

    // Test data
    std::vector<int> testData = {5, 2, 9, 1, 5, 6};

    // Display original data
    std::cout << "Original data: ";
    for (int num : testData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the data using BubbleSort
    std::vector<int> sortedData = bubbleSort.sort(testData);

    // Display sorted data
    std::cout << "Sorted data: ";
    for (int num : sortedData) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

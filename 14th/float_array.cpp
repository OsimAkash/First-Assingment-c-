#include <iostream>

int main() {
    // Declare and initialize an array of 10 integers for even numbers
    int evenNumbers[10];

    // Initialize the array with the first 10 even numbers
    for (int i = 0; i < 10; ++i) {
        evenNumbers[i] = (i + 1) * 2;
    }

    // Print the elements of the array
    std::cout << "First 10 even numbers:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << evenNumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

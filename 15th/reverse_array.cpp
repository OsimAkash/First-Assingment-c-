#include <iostream>

int main() {
    // Create an array of 6 integers
    int numbers[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the original array
    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Reverse the array
    for (int i = 0; i < size / 2; ++i) {
        int temp = numbers[i];
        numbers[i] = numbers[size - 1 - i];
        numbers[size - 1 - i] = temp;
    }

    // Print the reversed array
    std::cout << "Reversed array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

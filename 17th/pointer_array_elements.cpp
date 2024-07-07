#include <iostream>

int main() {
    // Define an array of integers
    int numbers[] = { 1, 2, 3, 4, 5 };

    // Define a pointer to the array
    int *ptr = numbers;

    // Print all elements of the array using the pointer
    std::cout << "Elements of the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i + 1 << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    // Declare and initialize an array of 5 floating point numbers
    float numbers[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };

    // Print the elements of the array using a loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i + 1 << ": " << numbers[i] << std::endl;
    }

    return 0;
}

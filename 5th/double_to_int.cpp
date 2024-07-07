#include <iostream>

int main() {
    // Declare and initialize a double variable
    double doubleVar = 8.99;

    // Cast the double variable to an integer
    int intVar = static_cast<int>(doubleVar);

    // Print both values
    std::cout << "Original double value: " << doubleVar << std::endl;
    std::cout << "Casted integer value: " << intVar << std::endl;

    return 0;
}

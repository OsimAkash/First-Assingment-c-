#include <iostream>

int main() {
    // Declare and initialize a float variable
    float floatVar = 5.75f;

    // Cast the float variable to an integer
    int intVar = static_cast<int>(floatVar);

    // Print both values
    std::cout << "Original float value: " << floatVar << std::endl;
    std::cout << "Casted integer value: " << intVar << std::endl;

    return 0;
}

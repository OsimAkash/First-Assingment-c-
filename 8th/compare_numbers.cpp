#include <iostream>

int main() {
    // Declare and initialize two numbers
    int num1 = 10;
    int num2 = 15;

    // Compare the two numbers and print the result
    if (num1 > num2) {
        std::cout << num1 << " is bigger than " << num2 << "." << std::endl;
    } else if (num1 < num2) {
        std::cout << num2 << " is bigger than " << num1 << "." << std::endl;
    } else {
        std::cout << num1 << " and " << num2 << " are equal." << std::endl;
    }

    return 0;
}

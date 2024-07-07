#include <iostream>

int main() {
    // Input two numbers
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Variables to store original numbers (for output)
    int originalNum1 = num1;
    int originalNum2 = num2;

    // Find GCD using Euclidean algorithm
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    // num1 (or num2) now contains the GCD
    int gcd = num1;

    // Print the GCD
    std::cout << "GCD of " << originalNum1 << " and " << originalNum2 << " is: " << gcd << std::endl;

    return 0;
}

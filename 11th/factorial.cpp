#include <iostream>

int main() {
    // Input number for which factorial is to be calculated
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Variable to store the factorial
    int factorial = 1;
    int i = 1;

    // Calculate factorial using a while loop
    while (i <= number) {
        factorial *= i;
        i++;
    }

    // Print the factorial
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}

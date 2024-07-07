#include <iostream>

// Function to return the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Example usage of the max function
    int num1 = 10, num2 = 20;
    int result = max(num1, num2);

    std::cout << "Max of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}

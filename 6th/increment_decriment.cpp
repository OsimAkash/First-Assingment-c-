#include <iostream>

int main() {
    // Declare and initialize a variable
    int num = 10;

    // Print the original value
    std::cout << "Original value: " << num << std::endl;

    // Increment the variable
    num++;
    std::cout << "After increment: " << num << std::endl;

    // Decrement the variable
    num--;
    std::cout << "After decrement: " << num << std::endl;

    // Perform pre-increment and post-increment
    std::cout << "Pre-increment: " << ++num << std::endl; // Increment first, then print
    std::cout << "Post-increment: " << num++ << std::endl; // Print first, then increment
    std::cout << "Value after post-increment: " << num << std::endl; // Print the incremented value

    // Perform pre-decrement and post-decrement
    std::cout << "Pre-decrement: " << --num << std::endl; // Decrement first, then print
    std::cout << "Post-decrement: " << num-- << std::endl; // Print first, then decrement
    std::cout << "Value after post-decrement: " << num << std::endl; // Print the decremented value

    return 0;
}

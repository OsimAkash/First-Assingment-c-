#include <iostream>

int main() {
    // Initialize a string (array of characters)
    char str[] = "Hello";

    // Print the original string
    std::cout << "Original string: " << str << std::endl;

    // Change a specific character (e.g., change 'e' to 'a')
    str[1] = 'a';

    // Print the modified string
    std::cout << "Modified string: " << str << std::endl;

    return 0;
}

#include <iostream>
#include <string>

// Function to print a greeting message
void greet(std::string name, int age) {
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
}

int main() {
    // Example usage of the greet function
    std::string userName = "Alice";
    int userAge = 30;
    greet(userName, userAge);

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string firstName = "John";
    std::string lastName = "Doe";

    std::string fullName = firstName + " " + lastName;

    std::cout << "Full name is: " << fullName << std::endl;

    return 0;
}

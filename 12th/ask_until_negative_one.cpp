#include <iostream>

int main() {
    int number;

    // Keep asking for a number until -1 is entered
    do {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> number;
    } while (number != -1);

    std::cout << "Stopping the program." << std::endl;

    return 0;
}

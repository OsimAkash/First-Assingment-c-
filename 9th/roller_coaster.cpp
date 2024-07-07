#include <iostream>

int main() {
    // Declare and initialize age and height variables
    int age = 15;           // Age in years
    int height = 140;       // Height in centimeters

    // Check if the person can ride the roller coaster
    if (age >= 12 && height >= 120) {
        std::cout << "You can ride the roller coaster!" << std::endl;
    } else {
        std::cout << "Sorry, you cannot ride the roller coaster." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    // Declare and initialize city and country strings
    std::string city = "Paris";
    std::string country = "France";

    // Concatenate city and country to form location
    std::string location = city + ", " + country;

    // Print the location
    std::cout << "Location: " << location << std::endl;

    return 0;
}

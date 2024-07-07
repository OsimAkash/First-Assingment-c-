#include <iostream>

int main() {
    // Declare and initialize weight and distance variables
    double weight = 18.0;   // Weight in kilograms
    double distance = 150.0; // Distance in kilometers

    // Determine the shipping cost based on weight
    double shippingCost = 0.0;
    
    if (weight < 5.0) {
        shippingCost = distance * 1.0; // Cost per km for weight < 5 kg
    } else if (weight >= 5.0 && weight < 20.0) {
        shippingCost = distance * 1.5; // Cost per km for weight >= 5 kg and < 20 kg
    } else {
        shippingCost = distance * 2.0; // Cost per km for weight >= 20 kg
    }

    // Print the shipping cost
    std::cout << "The shipping cost is: $" << shippingCost << std::endl;

    return 0;
}

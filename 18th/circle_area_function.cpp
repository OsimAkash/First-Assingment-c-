#include <iostream>

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    const double pi = 3.14159;
    return pi * radius * radius;
}

int main() {
    // Example usage of the calculateCircleArea function
    double radius = 5.0;
    double area = calculateCircleArea(radius);

    std::cout << "Radius of the circle: " << radius << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}

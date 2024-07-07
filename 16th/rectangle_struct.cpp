#include <iostream>

// Define the structure Rectangle
struct Rectangle {
    int width;
    int height;
};

int main() {
    // Create an instance of Rectangle
    Rectangle rect;

    // Initialize the properties
    rect.width = 5;
    rect.height = 10;

    // Print the properties of the rectangle
    std::cout << "Rectangle properties:" << std::endl;
    std::cout << "Width: " << rect.width << std::endl;
    std::cout << "Height: " << rect.height << std::endl;

    return 0;
}

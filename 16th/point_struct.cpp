#include <iostream>

// Define the structure Point
struct Point {
    int x;
    int y;
};

// Function to print a point
void printPoint(Point p) {
    std::cout << "Point coordinates: (" << p.x << ", " << p.y << ")" << std::endl;
}

int main() {
    // Create an instance of Point
    Point p1;

    // Initialize the coordinates
    p1.x = 3;
    p1.y = 7;

    // Print the point using the function
    printPoint(p1);

    return 0;
}

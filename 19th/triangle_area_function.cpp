#include <iostream>

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    // Example usage of the calculateTriangleArea function
    float triangleBase = 5.0f;
    float triangleHeight = 8.0f;
    float area = calculateTriangleArea(triangleBase, triangleHeight);

    std::cout << "Base of the triangle: " << triangleBase << std::endl;
    std::cout << "Height of the triangle: " << triangleHeight << std::endl;
    std::cout << "Area of the triangle: " << area << std::endl;

    return 0;
}

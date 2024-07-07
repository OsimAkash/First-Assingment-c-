#include <iostream>

int main() {
    // Loop to print the square of numbers from 1 to 5
    for (int i = 1; i <= 5; ++i) {
        int square = i * i;
        std::cout << "Square of " << i << ": " << square << std::endl;
    }

    return 0;
}

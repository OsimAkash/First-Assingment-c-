#include <iostream>

int main() {
    // Print numbers from 1 to 10, stopping when it reaches 6
    for (int i = 1; i <= 10; ++i) {
        if (i == 6) {
            break; // Stop the loop when i reaches 6
        }
        std::cout << i << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    // Print numbers from 1 to 10, skipping 4 and 7
    for (int i = 1; i <= 10; ++i) {
        if (i == 4 || i == 7) {
            continue; // Skip numbers 4 and 7
        }
        std::cout << i << std::endl;
    }

    return 0;
}

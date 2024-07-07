#include <iostream>

int main() {
    int num = 1;

    // Print numbers from 1 to 10, skipping numbers divisible by 5
    while (num <= 10) {
        if (num % 5 == 0) {
            num++;
            continue; // Skip numbers divisible by 5
        }
        std::cout << num << std::endl;
        num++;
    }

    return 0;
}

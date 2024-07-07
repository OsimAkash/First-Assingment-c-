#include <iostream>

int main() {
    // Declare variables
    int integerVar = 10;
    float floatVar = 3.14f;
    char charVar = 'A';

    // Declare pointers
    int *intPtr = &integerVar;
    float *floatPtr = &floatVar;
    char *charPtr = &charVar;

    // Print addresses using pointers
    std::cout << "Address of integerVar: " << intPtr << std::endl;
    std::cout << "Address of floatVar: " << floatPtr << std::endl;
    std::cout << "Address of charVar: " << static_cast<void *>(charPtr) << std::endl;

    return 0;
}

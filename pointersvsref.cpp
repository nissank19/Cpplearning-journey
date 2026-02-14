#include <iostream>

// 1. Swap by Pointer: You must use * to get the value at the address
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    // Finish the logic:
    // Set the value at address 'a' to the value at address 'b'
    // Set the value at address 'b' to 'temp'
}

// 2. Swap by Reference: Treat 'a' and 'b' like normal variables
void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    // Finish the logic:
    // No * needed here!
}

int main() {
    int engineTemp = 90;
    int targetTemp = 20;

    std::cout << "Original: " << engineTemp << ", " << targetTemp << std::endl;

    swapByPointer(&engineTemp, &targetTemp); // Notice the '&' to pass addresses
    std::cout << "After Pointer Swap: " << engineTemp << ", " << targetTemp << std::endl;

    swapByReference(engineTemp, targetTemp); // Notice: looks like a normal call
    std::cout << "After Reference Swap: " << engineTemp << ", " << targetTemp << std::endl;

    return 0;
}
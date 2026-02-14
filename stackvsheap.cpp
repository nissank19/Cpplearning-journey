#include <iostream>
#include<memory>

/**
 * TASK 1: THE STACK FAILURE
 * 1. Create a local integer variable and set it to 500.
 * 2. Return the address of that local variable using the '&' operator.
 */
int* createStackPointer() {
    // TODO: Implement task 1
    int var=500;
    return &var;
    return nullptr;
}

/**
 * TASK 2: THE HEAP SUCCESS
 * 1. Allocate an integer on the Heap using 'new' and set its value to 500.
 * 2. Return that heap pointer.
 */
int* createHeapPointer() {
    // TODO: Implement task 2
    int *badPtr;
    badPtr = new int(500);
    return badPtr;
}

int main() {
    std::cout << "--- Task 1: Stack Investigation ---" << std::endl;
    int* badPtr = createStackPointer();

    // Once implemented, uncomment the line below to see the "Dangling Pointer" effect
     std::cout << "Stack Value: " << *badPtr << std::endl;

    std::cout << "\n--- Task 2: Heap Investigation ---" << std::endl;
    int* goodPtr = createHeapPointer();

    if (goodPtr != nullptr) {
        std::cout << "Heap Value: " << *goodPtr << std::endl;
        std::cout << "Heap Address: " << goodPtr << std::endl;

        /**
         * TASK 3: MANUAL CLEANUP
         * 1. Delete the memory pointed to by goodPtr.
         * 2. Set goodPtr to nullptr to avoid it being a dangling pointer.
         */
        // TODO: Implement task 3
        delete goodPtr;
        goodPtr = nullptr;
    }

    std::cout << "\n--- Task 4: The Neighborhood Gap ---" << std::endl;
    int stackX = 10;
    std::cout << "Stack Address Neighborhood: " << &stackX << std::endl;
    // Compare this printed address to the Heap address from Task 2.

    return 0;
}
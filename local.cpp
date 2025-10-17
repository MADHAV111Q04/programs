#include <iostream>

// Global variable
int value = 100;

// Custom namespace
namespace MyNamespace {
    int value = 200;

    void show() {
        std::cout << "Namespace value: " << value << std::endl;
    }
}

int main() {
    int value = 300; // Local variable

    std::cout << "Local value: " << value << std::endl;        // Local variable
    std::cout << "Global value: " << ::value << std::endl;     // Scope resolution to global
    std::cout << "Namespace value: " << MyNamespace::value << std::endl; // Access from namespace

    MyNamespace::show();  // Call function inside namespace

    return 0;
}


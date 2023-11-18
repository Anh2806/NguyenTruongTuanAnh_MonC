#include <iostream>
using namespace std;

// Demo class declaration.
class Demo {
public:
    Demo(); // Constructor declaration
};

// Constructor definition
Demo::Demo() {
    cout << "Welcome to the constructor!\n";
}

// Function main
int main() {
    cout << "This program demonstrates an object\n";
    cout << "with a constructor.\n";

    // Create a Demo object; the constructor will be called
    Demo demoObject;

    return 0;
}

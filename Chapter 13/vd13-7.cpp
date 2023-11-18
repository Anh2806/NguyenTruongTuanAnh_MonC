#include <iostream>
#include "Rectangle2.h" // Filename: Rectangle.h
using namespace std;

int main() {
    Rectangle box; // Rectangle object with default values

    // Display the rectangle's data.
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    return 0;
}

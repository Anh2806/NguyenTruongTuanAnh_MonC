
#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0.0), width(0.0) {}

// Constructor with parameters
Rectangle::Rectangle(double initialWidth, double initialLength)
    : length(initialLength), width(initialWidth) {}

// Getter functions
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return length * width;
}
// Filename: Rectangle.cpp
// Filename: Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle();

    // Constructor with parameters
    Rectangle(double initialWidth, double initialLength);

    // Getter functions
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

#endif // RECTANGLE_H

#include <iostream>
#include <memory>

using namespace std;

// Rectangle class declaration
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle() : length(0.0), width(0.0) {}

    // Setter functions
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }

    // Getter function for area
    double getArea() const { return length * width; }
};

int main() {
    double number;   // To hold a number
    double totalArea; // The total area

    // Dynamically allocate the objects.
    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);

    // Get the kitchen dimensions.
    cout << "What is the kitchen's length? ";
    cin >> number;                    // Get the length
    kitchen->setLength(number);       // Store in the kitchen object
    cout << "What is the kitchen's width? ";
    cin >> number;                    // Get the width
    kitchen->setWidth(number);        // Store in the kitchen object

    // Get the bedroom dimensions.
    cout << "What is the bedroom's length? ";
    cin >> number;                    // Get the length
    bedroom->setLength(number);       // Store in the bedroom object
    cout << "What is the bedroom's width? ";
    cin >> number;                    // Get the width
    bedroom->setWidth(number);        // Store in the bedroom object

    // Get the den dimensions.
    cout << "What is the den's length? ";
    cin >> number;                    // Get the length
    den->setLength(number);           // Store in the den object
    cout << "What is the den's width? ";
    cin >> number;                    // Get the width
    den->setWidth(number);            // Store in the den object

    // Calculate the total area of the three rooms.
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

    // Display the total area of the three rooms.
    cout << "The total area of the three rooms is " << totalArea << endl;

    return 0;
}

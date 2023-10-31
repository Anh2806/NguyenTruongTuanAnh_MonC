#include <iostream>
using namespace std;

class Rectangle
{
    private:
        double width;
        double length;

    public:
        void setWidth(double w) {
            width = w;
        }

        void setLength(double len) {
            length = len;
        }

        double getWidth() const {
            return width;
        }

        double getLength() const {
            return length;
        }

        double getArea() const {
            return width * length;
        }
};

int main()
{
    double number;
    double totalArea;

    Rectangle kitchen;
    Rectangle bedroom;
    Rectangle den;

    cout << "What is the kitchen's length? ";
    cin >> number;
    kitchen.setLength(number);
    cout << "What is the kitchen's width? ";
    cin >> number;
    kitchen.setWidth(number);

    cout << "What is the bedroom's length? ";
    cin >> number;
    bedroom.setLength(number);
    cout << "What is the bedroom's width? ";
    cin >> number;
    bedroom.setWidth(number);

    cout << "What is the den's length? ";
    cin >> number;
    den.setLength(number);
    cout << "What is the den's width? ";
    cin >> number;
    den.setWidth(number);

    totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();

    cout << "The total area of the three rooms is: " << totalArea << endl;
    return 0;
}

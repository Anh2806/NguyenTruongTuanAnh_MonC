#include <iostream>
#include <iomanip>
using namespace std;

void showIntro();
double getCups();
double CupsToOunces(double);
int main(){
    double cups, ounces;
    cout << fixed << showpoint << setprecision(1);
    showIntro();
    cups = getCups();
    ounces = CupsToOunces(cups);
    cout << cups << " cups equals "
        << ounces << "ounces\n";
    return 0;
}
void showIntro(){
    cout << "THis program converts meaurements\n"
        << "in cups to fluid ounces. For your\n"
        << "reference the formula is:\n"
        << " 1 cup = 8 fluid ounces\n\n";
}
double getCups()
{
    double numCups;
    cout << "Enter the number of cups: ";
    cin >> numCups;
    return numCups;
}
double cupsToOunces(double numCups)
{
    return numCups * 8.0;
}

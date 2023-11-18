#include <iostream>
using namespace std;
bool isEven(int);
int main() {
    int val;
    cout << "Enter an interger and I will tell you";
    cout << "if it is even or old: ";
    cin >> val;
    if ( isEven(val))
        cout << val << " is even.\n";
    else 
        cout << val << "is odd.\n";
    return 0;
}
bool isEven(int number) {
    bool status;
    if( number % 2 == 0)
        status = true;
    else
        status = false;
    return status;
}

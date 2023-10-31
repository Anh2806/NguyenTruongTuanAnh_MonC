#include <iostream>
using namespace std;

int main()
{
    const double MIN_INCOME = 35000.0;
    const int MIN_YEAR = 5;
    cout << "What is your annual income?";
    double income;
    cin >> income;
    
    cout << "How many years have you worked at"
        << "your current job?";
    int years;
    cin >> years;

    if (income >= MIN_INCOME || years > MIN_YEAR)
        cout << "you qualify.\n";
    else
    {
        cout << "you must earn at least $"
            << MIN_INCOME << " or have been"
            << "employed more than " << MIN_YEAR 
            << " years.\n";
    }
    return 0;
}
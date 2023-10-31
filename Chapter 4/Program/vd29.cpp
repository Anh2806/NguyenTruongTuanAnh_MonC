#include <iostream>
using namespace std;

int main()
{
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    cout << "What is your annual income?";
    double income;
    cin >> income;
    if (income >= MIN_INCOME)
    {
        cout << "How many year hava you worked at"
            << "your current job";
        int years;
        cin >> years;
        if (years > MIN_YEARS)
            cout << "you qualify.\n";
        else
        {
            cout << "you must have been employed for\n"
                << "more than " << MIN_YEARS 
                << " years to qualify.\n";
        }
    }
    else
    {
        cout << "you must earn at least $" << MIN_INCOME 
            << " to qualify.\n";
    }
    return 0;
}
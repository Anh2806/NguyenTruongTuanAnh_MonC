#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYMENTS = 6;
    int hours[NUM_EMPLOYMENTS];
    int count;

    for (count = 0; count < NUM_EMPLOYMENTS; count++)
    {
        for (count = 0; count < NUM_EMPLOYMENTS; count++)
        {
            cout << "Enter the hours worked by employee "
                 << (count + 1) << ": ";
            cin >> hours[count];
        }
        cout << "The hours you entered are: ";
        for (count = 0; count < NUM_EMPLOYMENTS; count++)
            cout << " " << hours[count];
        cout << endl;
        return 0;
    }
    
}
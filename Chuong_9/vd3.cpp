#include <iostream>
using namespace std;

int main()
{   
    int x;
    cout << " Hay nhap tuoi cua ban ";
    cin >> x;
    if (x < 6)
    {
        cout << "Tre em ";
    
    }
    else if (x < 16)
        cout << "Tre vi thanh nien";
    else
    {
        cout << "nguoi lon";
    }
    return 0;
}

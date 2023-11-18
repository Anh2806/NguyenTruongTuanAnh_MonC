#include <iostream>
using namespace std;

int main() {
    double giaveHangA = 150000;
    double giaveHangB = 120000;
    double giaveHangC = 90000;
    int ghehangA, ghehangB, ghehangC;
    cout << " so luong ghe hang A: ";
    cin >> ghehangA;
    cout << " so luong ghe hang B: ";
    cin >> ghehangB;
    cout << " so luong ghe hang C: ";
    cin >> ghehangC;
    double Tongsotien = giaveHangA * ghehangA + giaveHangB * ghehangB + giaveHangC * ghehangC;
    cout << "Tong danh thu la: " << Tongsotien << "VND" <<endl;
    return 0;
}
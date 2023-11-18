#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    const double YEN_PER_DOLLAR = 150.23;
    const double EUROS_PER_DOLLAR = 0.94;
    double dollars;
    cout << "Nhap so tien do la my: $";
    cin >> dollars;
    double yen = dollars * YEN_PER_DOLLAR;
    double EUROS =dollars * EUROS_PER_DOLLAR;
    cout << "so tien tuong duong o Yen Nhat: " << fixed << setprecision(2) << yen << endl;
    cout << "so tien tuong duong o euro: " << fixed << setprecision(2) << EUROS << endl;
    return 0;
}
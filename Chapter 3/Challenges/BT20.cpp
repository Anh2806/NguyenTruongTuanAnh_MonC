#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double dientichlatcat = 14.125;
    double Duongkinhr,tongsolatcat;
    double Pi= 3.1415;
    cout << "Duong kinh cua chiec banh pizza: ";
    cin >> Duongkinhr;
    double DienTich = Pi * pow(Duongkinhr,2);
    tongsolatcat = static_cast<int>(DienTich / dientichlatcat) ;
    cout << "dien tich hinh chiec banh pizza la: " << DienTich << endl;
    cout << "Tong so lat la: " << tongsolatcat << endl;

    return 0;
}
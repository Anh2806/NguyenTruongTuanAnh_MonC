#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double giaTriThucTe;
    cout << "Nhap gia tri thuc te cua tai san(USD): $";
    cin >> giaTriThucTe;
    double giaTriDanhGia = 0.6 * giaTriThucTe;
    double thueTaiSan = (giaTriDanhGia / 100) *0.75;
    cout << "Gia tri danh gia cua tai san: $" << fixed << setprecision(2) << giaTriDanhGia << endl;
    cout << "Thue tai san: $" << fixed << setprecision(2) << thueTaiSan << endl;
    return 0;
}
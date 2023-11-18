#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double soTienVay, laiSuatHangthang;
    int soLanThanhToan;
    cout << "Nhap so tien cho vay (USD): $";
    cin >> soTienVay;
    cout << "Nhap lai suat hang thang(duoi dang phan tram): ";
    cin >> laiSuatHangthang;
    cout << "Nhap so lan thanh toan: ";
    cin >> soLanThanhToan;
    laiSuatHangthang /= 100;
    double thanhToan = (laiSuatHangthang * soTienVay * pow(1 + laiSuatHangthang, soLanThanhToan)) / (pow(1 + laiSuatHangthang, soLanThanhToan) - 1);
    double soTienDaHoanTra = thanhToan * soLanThanhToan;
    double tienLaiPhaiTra = soTienDaHoanTra - soTienVay;
    cout << "so tien cho vay: $" << fixed << setprecision(2) << soTienVay << endl;
    cout << "Lai suat hang thang: " << fixed << setprecision(2) << laiSuatHangthang << endl;
    cout <<" so lan thanh toan: " << soLanThanhToan << endl;
    cout << "so tien da hoan tra: $" << fixed << setprecision(2) << soTienDaHoanTra << endl;
    cout << "Tien lai phai tra: $" << fixed << setprecision(2) << tienLaiPhaiTra << endl;

    return 0;
}
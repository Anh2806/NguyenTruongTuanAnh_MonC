#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double vonGoc, laisuat;
    int soLanGhepLai;
    cout << "Nhap lai suat(duoi dang pham tram): ";
    cin >> laisuat;
    cout << "Nhap so lan lai duoc ghep lai trong mot nam: ";
    cin >> soLanGhepLai;
    cout << "Nhap so tien goc: $";
    cin >> vonGoc;
    laisuat/= 100;
    double soTienCuoiCung = vonGoc * pow((1 + laisuat / soLanGhepLai), soLanGhepLai);
    double lai = soTienCuoiCung - vonGoc;
    cout << "Lai suat: " << fixed << setprecision(2) 
        << laisuat * 100 <<"%" << endl;
    cout << "so lan gop: " << soLanGhepLai << endl;
    cout << "von goc $" <<fixed << setprecision(2) << vonGoc << endl;
    cout << "Lai: $" << fixed <<setprecision(2) << lai << endl;
    cout << "so tien tiet kiem: $" << fixed << setprecision(2) << soTienCuoiCung << std::endl;
}
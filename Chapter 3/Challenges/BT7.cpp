#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main(){
    string Tenphim;
    int veNguoiLon, veTreEm;
    const double giavenguoiLon = 10;
    const double giaveTreem =6;
    cout << "Nhap ten phim";
    getline(cin, Tenphim);
    cout << "Nhap so luong nguoi lon: ";
    cin >> veNguoiLon;
    cout << "Nhap so luong tre em: ";
    cin >> veTreEm;
    double Doanhthu = (veNguoiLon * giavenguoiLon) + (veTreEm *giaveTreem);
    double LoiNhuan = Doanhthu * 0.2;
    double TienNhaPhaPhoi = Doanhthu - LoiNhuan;

    cout << "Ten phim: " << Tenphim << endl;
    cout << "Ve nguoi lon da ban: " <<veNguoiLon << endl;
    cout << "Ve Tre en da ban: " <<veTreEm << endl;
    cout << "Loai nhuat gop phong ve: $" << fixed << setprecision(2) << Doanhthu << endl;
    cout << "Loi nhuan phong ve rong: $" << LoiNhuan << endl;
    cout << " so tien tra cho nha phan Phoi: $" << TienNhaPhaPhoi << endl;
    return 0;
    
}
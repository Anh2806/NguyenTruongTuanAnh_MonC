#include <iostream>
using namespace std;

int main(){
    const int soBanhQuyTrenTui = 30;
    const int soKhauPhanTrenTui = 10;
    const int caloMotKhauPhan = 300;

    int soLuongBanhQuyAn;
    cout << "Nhap so luong banh quy ban da an: ";
    cin >> soLuongBanhQuyAn;
    int tongCaloTieuThu = (soLuongBanhQuyAn / soBanhQuyTrenTui) * (caloMotKhauPhan * soKhauPhanTrenTui);
    cout << "Tong luong calo da tieu thu: " << tongCaloTieuThu << " calo" << endl;
    return 0;

}
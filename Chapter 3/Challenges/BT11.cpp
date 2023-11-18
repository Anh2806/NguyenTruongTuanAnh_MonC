#include <iostream>
using namespace std;
int main(){
    double khoanvay,baohiem,gas,dau,lopxe,baotri;
    cout << "Nhap tri phi khoan vay cua thang: ";
    cin >> khoanvay;
    cout << "Nhap tri phi bao hiem cua thang: ";
    cin >> baohiem;
    cout << "Nhap tri phi gas cua thang: ";
    cin >> gas;
    cout << "Nhap tri phi dau cua thang: ";
    cin >> dau;
    cout << "Nhap tri phi lopxe cua thang: ";
    cin >> lopxe;
    cout << "Nhap tri phi baotri cua thang: ";
    cin >> baotri;
    double Tongchiphihangthang = khoanvay + baohiem + gas + dau + lopxe + baotri;
    double Tongchiphihangnam = 12 * Tongchiphihangthang;
    cout << "Tong chi phi hang thang la : " << Tongchiphihangthang << "Đ" << endl;
    cout << "Tong chi phi hang nam la : " << Tongchiphihangnam << "Đ" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    const double trongluongPallet = 12.5;
    double trongluongVat;
    double trongluongPalletNhap;
    cout << "Nhap Trong luong cua pallet (pound):";
    cin >> trongluongPalletNhap;
    cout << "Nhap trong luong cua moi vat dung(pound): ";
    cin >> trongluongVat;
    int soLuongVatDung =trongluongPalletNhap / trongluongVat;
    cout << "so luong vat dung co the xep len pallet: " << soLuongVatDung << endl;
    return 0;
}
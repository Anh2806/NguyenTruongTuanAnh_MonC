#include <iostream>
using namespace std;

int main(){
    double LuongmuaThang6, LuongmuaThang7, LuongmuaThang8;
    cout << "Luong mua cua thang 6 la: ";
    cin >>LuongmuaThang6;
    cout << "Luong mua cua thang 7 la: ";
    cin >>LuongmuaThang7;
    cout << "Luong mua cua thang 8 la: ";
    double TongLuongmua3thang = (LuongmuaThang6 + LuongmuaThang7 + LuongmuaThang8) / 3.0;
    cout << "Luong mua trung binh trong thang6, thang7, thang8 la: " << TongLuongmua3thang << " inch " << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int Cophieu = 750;
    int SoTien1Cophieu = 35;
    double HoaHong = 0.02;
    int TongCuaCP = Cophieu * SoTien1Cophieu;
    cout << "Tong So tien mua co phieu la " << TongCuaCP << " USD" << endl;
    double TienHoaHong = TongCuaCP * HoaHong;
    cout << "So tien tra cho nguoi giao dich la: " << TienHoaHong << " USD" << endl;
    double TongCong = TongCuaCP + TienHoaHong;
    cout << "Tong Cong So tien thanh toan: " << TongCong << " USD" << endl;
    return 0;
}
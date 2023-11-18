#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double THUE_TIEU_BANG = 0.04;
    const double THUE_QUAN = 0.02;
    int thang, nam;
    double tongTHuNhap;
    cout << "Nhap thang: ";
    cin >> thang ;
    cout << "Nhap nam: ";
    cin >> nam ;
    cout << "Nhap tong so tien thu duoc : $";
    cin >> tongTHuNhap;
    double doanhThu = tongTHuNhap / (1 + THUE_TIEU_BANG + THUE_QUAN);
    double thuetieubang = doanhThu * THUE_TIEU_BANG;
    double thuequan = doanhThu * THUE_QUAN;

    cout << "Thang: thang " << thang << endl;
    cout << "--------------------" << endl;
    cout << "Nam: " << nam << endl;
    cout << "Tong danh thu thu duoc " << fixed << setprecision(2) << tongTHuNhap << endl;
    cout << "Doanh thu: $" << fixed << setprecision(2) << doanhThu << endl;
    cout << "Thue ban hang cua quan: $" << fixed << setprecision(2) << thuequan << endl;
    cout << "Thue ban hang cua tieu bang: $" << fixed << setprecision(2) << thuetieubang << endl;
    cout << "Tong thue ban hang : $" << fixed << setprecision(2) << (thuetieubang + thuequan) << endl;

}
#include <iostream>
using namespace std;
int main(){
    int xang = 20;
    double vantoc = 23.5;
    double vantocCaoToc = 28.9;
    double KhoangcachTrongThiTran = xang * vantoc;
    double KhoangCachDuongCaoToc = xang * vantocCaoToc;
    cout << "Khoang cach oto di duoc trong thi tran la: " << KhoangcachTrongThiTran << " Miles" << endl;
    cout << " Khoang cach oto di duoc trong cao toc la: " << KhoangCachDuongCaoToc << " Miles" << endl;
    return 0;
}
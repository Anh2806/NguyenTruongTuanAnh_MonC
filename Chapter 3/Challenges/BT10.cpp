#include <iostream>
using namespace std;

int main(){
    double chiPhiThayThe, soTienBaoHiem;
    cout << "Nhap chi phi thay the cua toa nha: $";
    cin >> chiPhiThayThe;
    soTienBaoHiem = 0.8 * chiPhiThayThe;
    cout << "So tien bao hiem toi thieu can mua: $" << soTienBaoHiem << "$" << endl;
    return 0;
}
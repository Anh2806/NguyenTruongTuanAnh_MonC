#include <iostream>
using namespace std;

int main() {
    // Khai báo và khởi tạo biến lương mỗi kỳ trả (payAmount) và số kỳ trả lương hàng năm (payPeriods)
    double payAmount = 2200.0;
    int payPeriods = 26;

    // Tính tổng thu nhập hàng năm (annualPay)
    double annualPay = payAmount * payPeriods;

    // In ra màn hình tổng thu nhập hàng năm
    cout << "Thu nhap hang nam cua nhan vien la: $" << annualPay << endl;

    return 0;
}

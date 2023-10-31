#include <iostream>
using namespace std;

int main() {
    // Giá trị mua sắm
    double purchaseAmount = 95.0; // $95

    // Tỷ lệ thuế bán hàng của tiểu bang (4%)
    double stateSalesTaxRate = 0.04;

    // Tỷ lệ thuế bán hàng của quận (2%)
    double countySalesTaxRate = 0.02;

    // Tính tổng thuế bán hàng
    double stateSalesTax = purchaseAmount * stateSalesTaxRate;
    double countySalesTax = purchaseAmount * countySalesTaxRate;
    double totalSalesTax = stateSalesTax + countySalesTax;

    // In ra màn hình tổng thuế bán hàng
    cout << "Tong thue ban hang la: $" << totalSalesTax << endl;

    return 0;
}

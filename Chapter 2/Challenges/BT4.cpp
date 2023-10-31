#include <iostream>
using namespace std;

int main() {
    // Chi phí bữa ăn
    double mealCost = 88.67;

    // Tỷ lệ thuế (6.75%)
    double taxRate = 0.0675;

    // Tỷ lệ boa (20%)
    double tipRate = 0.20;

    // Tính thuế và tiền boa
    double taxAmount = mealCost * taxRate;
    double tipAmount = (mealCost + taxAmount) * tipRate;

    // Tính tổng hóa đơn
    double totalBill = mealCost + taxAmount + tipAmount;

    // In ra màn hình chi phí bữa ăn, tiền thuế, tiền boa và tổng hóa đơn
    cout << "Chi phi bua an: $" << mealCost << endl;
    cout << "Tien thue: $" << taxAmount << endl;
    cout << "Tien boa: $" << tipAmount << endl;
    cout << "Tong hoa don: $" << totalBill << endl;

    return 0;
}

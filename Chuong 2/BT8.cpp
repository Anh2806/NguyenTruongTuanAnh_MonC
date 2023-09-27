#include <iostream>
using namespace std;

int main() {
    // Khai báo và khởi tạo giá của 5 mặt hàng
    double item1Price = 15.95;
    double item2Price = 24.95;
    double item3Price = 6.95;
    double item4Price = 12.95;
    double item5Price = 3.95;

    // Tỷ lệ thuế bán hàng (7%)
    double salesTaxRate = 0.07;

    // Tính tổng số tiền bán hàng
    double totalSales = item1Price + item2Price + item3Price + item4Price + item5Price;

    // Tính số tiền thuế bán hàng
    double salesTax = totalSales * salesTaxRate;

    // Tính tổng số tiền
    double totalAmount = totalSales + salesTax;

    // In ra màn hình giá của từng mặt hàng
    cout << "Gia cua mat hang 1: $" << item1Price << endl;
    cout << "Gia cua mat hang 2: $" << item2Price << endl;
    cout << "Gia cua mat hang 3: $" << item3Price << endl;
    cout << "Gia cua mat hang 4: $" << item4Price << endl;
    cout << "Gia cua mat hang 5: $" << item5Price << endl;

    // In ra màn hình tổng số tiền bán hàng, số tiền thuế bán hàng và tổng số tiền
    cout << "Tong so tien ban hang: $" << totalSales << endl;
    cout << "So tien thue ban hang: $" << salesTax << endl;
    cout << "Tong so tien: $" << totalAmount << endl;

    return 0;
}

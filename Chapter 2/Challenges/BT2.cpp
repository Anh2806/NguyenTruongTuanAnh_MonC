#include <iostream>
using namespace std;

int main() {
    // Tổng doanh số của công ty
    double totalSales = 8.6; // Đơn vị triệu đô

    // Tỷ lệ doanh số của bộ phận Đông Bắc (58%)
    double eastCoastPercentage = 0.58;

    // Tính doanh số của bộ phận Đông Bắc
    double eastCoastSales = totalSales * eastCoastPercentage;

    // In ra doanh số dự đoán của bộ phận Đông Bắc
    cout << "Doanh so du doan cua bo phan Dong Bac la: $" << eastCoastSales << " trieu" << endl;

    return 0;
}

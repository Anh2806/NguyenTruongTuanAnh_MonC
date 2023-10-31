#include <iostream>
using namespace std;

int main() {
    // Khai báo và khởi tạo năm biến
    int num1 = 28;
    int num2 = 32;
    int num3 = 37;
    int num4 = 24;
    int num5 = 33;

    // Tính tổng của năm biến
    int sum = num1 + num2 + num3 + num4 + num5;

    // Tính giá trị trung bình
    double average = static_cast<double>(sum) / 5;

    // In ra màn hình giá trị trung bình
    cout << "Gia tri trung binh cua 5 bien la: " << average << endl;

    return 0;
}

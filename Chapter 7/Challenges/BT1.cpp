#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; 
    int arr[SIZE]; 
    int lonnhat, nhonhat;

    // Nhập 10 giá trị vào mảng
    cout << "Nhap 10 gia tri vao mang:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Gia tri thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    // Tìm giá trị lớn nhất và nhỏ nhất
    lonnhat = nhonhat = arr[0]; // Giả sử giá trị đầu tiên là lớn nhất và nhỏ nhất
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > lonnhat) {
            lonnhat = arr[i];
        }
        if (arr[i] < nhonhat) {
            nhonhat = arr[i];
        }
    }

    // Hiển thị kết quả
    cout << "Gia tri lon nhat trong mang: " << lonnhat << endl;
    cout << "Gia tri nho nhat trong mang: " << nhonhat << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Kích thước của mảng
    int arr[SIZE]; // Khai báo mảng có 10 phần tử
    int largest, smallest;

    // Nhập 10 giá trị vào mảng
    cout << "Nhập 10 giá trị vào mảng:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Giá trị thứ " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Tìm giá trị lớn nhất và nhỏ nhất
    largest = smallest = arr[0]; // Giả sử giá trị đầu tiên là lớn nhất và nhỏ nhất
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Hiển thị kết quả
    cout << "Giá trị lớn nhất trong mảng: " << largest << endl;
    cout << "Giá trị nhỏ nhất trong mảng: " << smallest << endl;

    return 0;
}

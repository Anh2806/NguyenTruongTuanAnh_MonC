#include <iostream>
using namespace std;

// Hàm hiển thị các số trong mảng lớn hơn n
void displayNumbersGreaterThanN(int arr[], int size, int n) {
    cout << "Các số trong mảng lớn hơn " << n << " là:";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << " " << arr[i];
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 6;
    int numbers[SIZE] = {10, 20, 30, 40, 50, 60};
    int n;

    cout << "Nhập số n: ";
    cin >> n;

    // Gọi hàm để hiển thị các số lớn hơn n trong mảng
    displayNumbersGreaterThanN(numbers, SIZE, n);

    return 0;
}

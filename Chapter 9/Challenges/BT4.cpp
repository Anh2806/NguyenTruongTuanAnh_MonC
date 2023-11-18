#include <iostream>
#include <algorithm> // Để sử dụng hàm std::sort
#include <string>    // Để sử dụng lớp std::string
using namespace std;

// Hàm cấp phát động một mảng các số nguyên
int* allocateArray(int size) {
    return new int[size];
}

// Hàm nhập tên và điểm kiểm tra từ người dùng
void inputScoresAndNames(string* names, int* scores, int size) {
    cout << "Nhap ten va diem kiem tra cho " << size << " hoc sinh:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Nhap ten hoc sinh " << i + 1 << ": ";
        cin >> names[i];
        do {
            cout << "Nhap diem kiem tra " << i + 1 << ": ";
            cin >> scores[i];
            if (scores[i] < 0) {
                cout << "Loi: Diem kiem tra phai la so khong am. Nhap lai.\n";
            }
        } while (scores[i] < 0);
    }
}

// Hàm sắp xếp mảng theo thứ tự tăng dần
void sortScoresAndNames(string* names, int* scores, int size) {
    // Sử dụng hàm sắp xếp của thư viện algorithm
    sort(names, names + size);
    
    // Sắp xếp cả mảng điểm theo thứ tự tương ứng với mảng tên
    sort(scores, scores + size);
}

// Hàm hiển thị danh sách tên và điểm kiểm tra
void displayScoresAndNames(string* names, int* scores, int size) {
    cout << "Danh sach diem (sap xep tang dan theo ten): \n";
    for (int i = 0; i < size; ++i) {
        cout << names[i] << ": " << scores[i] << "\n";
    }
}

int main() {
    int size;
    cout << "Nhap so hoc sinh: ";
    cin >> size;

    // Cấp phát động mảng
    string* names = new string[size];
    int* scores = allocateArray(size);

    // Nhập tên và điểm kiểm tra
    inputScoresAndNames(names, scores, size);

    // Sắp xếp và hiển thị danh sách tên và điểm kiểm tra
    sortScoresAndNames(names, scores, size);
    displayScoresAndNames(names, scores, size);

    // Giải phóng bộ nhớ đã cấp phát
    delete[] names;
    delete[] scores;

    return 0;
}

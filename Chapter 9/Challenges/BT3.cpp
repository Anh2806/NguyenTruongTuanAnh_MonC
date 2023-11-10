#include <iostream>
#include <algorithm> // Để sử dụng hàm std::sort
using namespace std;

// Hàm cấp phát động một mảng các số nguyên
int* allocateArray(int size) {
    return new int[size];
}

// Hàm nhập điểm kiểm tra từ người dùng
void inputScores(int* scores, int size) {
    cout << "Nhap diem kiem tra cho " << size << " hoc sinh:\n";
    for (int i = 0; i < size; ++i) {
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
void sortScores(int* scores, int size) {
    sort(scores, scores + size);
}

// Hàm tính trung bình điểm, loại bỏ điểm thấp nhất
double calculateAverage(int* scores, int size) {
    if (size <= 1) {
        cerr << "Loi: Khong du du lieu de tinh trung binh.\n";
        return 0.0;
    }

    // Sắp xếp mảng
    sortScores(scores, size);

    // Tính trung bình, bỏ qua điểm thấp nhất
    int sum = 0;
    for (int i = 1; i < size; ++i) {
        sum += scores[i];
    }

    return static_cast<double>(sum) / (size - 1);
}

int main() {
    int size;
    cout << "Nhap so hoc sinh: ";
    cin >> size;

    // Cấp phát động mảng
    int* scores = allocateArray(size);

    // Nhập điểm kiểm tra
    inputScores(scores, size);

    // Tính và hiển thị trung bình điểm, loại bỏ điểm thấp nhất
    double average = calculateAverage(scores, size);
    cout << "Danh sach diem (sap xep tang dan): ";
    for (int i = 0; i < size; ++i) {
        cout << scores[i] << " ";
    }
    cout << "\nDiem trung binh (loai bo diem thap nhat): " << average << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] scores;

    return 0;
}

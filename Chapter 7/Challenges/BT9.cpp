#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 7;

int main() {
    int empId[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[SIZE];
    double payRate[SIZE];
    double totalSalary[SIZE];

    // Nhập số giờ làm việc và mức lương cho từng nhân viên
    for (int i = 0; i < SIZE; ++i) {
        cout << "Nhap so gio lam viec cua nhan vien " << empId[i] << ": ";
        cin >> hours[i];

        while (hours[i] < 0) {
            cout << "Vui long nhap so gio lam viec khong am: ";
            cin >> hours[i];
        }

        cout << "Nhap muc luong theo gio cua nhan vien " << empId[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.0) {
            cout << "Vui long nhap muc luong theo gio lon hon 15: ";
            cin >> payRate[i];
        }

        // Tính tổng tiền lương cho từng nhân viên
        totalSalary[i] = hours[i] * payRate[i];
    }

    // Hiển thị mã số và tổng tiền lương của từng nhân viên
    cout << setw(15) << "Ma so nhan vien" << setw(15) << "Tong tien luong" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << setw(15) << empId[i] << setw(15) << totalSalary[i] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    double rainfall[MONTHS];
    double totalRainfall = 0.0;
    double highestRainfall, lowestRainfall;

    // Nhập lượng mưa cho mỗi tháng
    for (int month = 0; month < MONTHS; month++) {
        do {
            cout << "Nhập lượng mưa cho tháng " << month + 1 << " (không âm): ";
            cin >> rainfall[month];

            if (rainfall[month] < 0) {
                cout << "Lượng mưa không thể là số âm. Hãy nhập lại." << endl;
            }
        } while (rainfall[month] < 0);

        totalRainfall += rainfall[month];

        if (month == 0 || rainfall[month] > highestRainfall) {
            highestRainfall = rainfall[month];
        }
        if (month == 0 || rainfall[month] < lowestRainfall) {
            lowestRainfall = rainfall[month];
        }
    }

    // Tính lượng mưa trung bình hàng tháng
    double averageRainfall = totalRainfall / MONTHS;

    // Hiển thị kết quả
    cout << "Tổng lượng mưa trong năm: " << totalRainfall << " inches" << endl;
    cout << "Lượng mưa trung bình hàng tháng: " << averageRainfall << " inches" << endl;
    cout << "Tháng có lượng mưa cao nhất: ";
    for (int month = 0; month < MONTHS; month++) {
        if (rainfall[month] == highestRainfall) {
            cout << "Tháng " << month + 1 << " ";
        }
    }
    cout << "(" << highestRainfall << " inches)" << endl;

    cout << "Tháng có lượng mưa thấp nhất: ";
    for (int month = 0; month < MONTHS; month++) {
        if (rainfall[month] == lowestRainfall) {
            cout << "Tháng " << month + 1 << " ";
        }
    }
    cout << "(" << lowestRainfall << " inches)" << endl;

    return 0;
}


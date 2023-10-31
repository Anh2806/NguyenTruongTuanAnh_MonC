#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_TYPES = 5;
    string salsaNames[NUM_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_TYPES];
    int totalSales = 0;
    string highestSelling, lowestSelling;

    // Nhập số lượng hũ bán cho từng loại salsa
    for (int i = 0; i < NUM_TYPES; i++) {
        do {
            cout << "Nhập số lượng hũ bán cho loại salsa " << salsaNames[i] << ": ";
            cin >> jarsSold[i];

            if (jarsSold[i] < 0) {
                cout << "Số lượng hũ bán không thể là số âm. Hãy nhập lại." << endl;
            }
        } while (jarsSold[i] < 0);

        totalSales += jarsSold[i];

        if (i == 0 || jarsSold[i] > jarsSold[i - 1]) {
            highestSelling = salsaNames[i];
        }
        if (i == 0 || jarsSold[i] < jarsSold[i - 1]) {
            lowestSelling = salsaNames[i];
        }
    }

    // Hiển thị báo cáo
    cout << "\nBáo cáo doanh số bán hàng cho các loại salsa:" << endl;
    for (int i = 0; i < NUM_TYPES; i++) {
        cout << "Loại salsa " << salsaNames[i] << ": " << jarsSold[i] << " hũ" << endl;
    }
    cout << "Tổng doanh số bán hàng: " << totalSales << " hũ" << endl;
    cout << "Loại salsa bán chạy nhất: " << highestSelling << endl;
    cout << "Loại salsa bán ít nhất: " << lowestSelling << endl;

    return 0;
}

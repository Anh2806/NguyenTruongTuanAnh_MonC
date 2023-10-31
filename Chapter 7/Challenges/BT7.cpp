#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    string filename;
    double number;
    double lowest, highest, total = 0;
    int count = 0;

    // Yêu cầu người dùng nhập tên tệp
    cout << "Nhập tên tệp chứa các số: ";
    cin >> filename;

    // Mở tệp để đọc
    inputFile.open(filename);

    // Kiểm tra xem tệp có mở thành công không
    if (!inputFile) {
        cerr << "Không thể mở tệp." << endl;
        return 1;
    }

    // Đọc dữ liệu từ tệp và thực hiện tính toán
    while (inputFile >> number) {
        if (count == 0) {
            lowest = highest = number;
        } else {
            if (number < lowest) {
                lowest = number;
            }
            if (number > highest) {
                highest = number;
            }
        }
        total += number;
        count++;
    }

    // Đóng tệp
    inputFile.close();

    // Kiểm tra xem tệp có dữ liệu không
    if (count == 0) {
        cout << "Tệp không có dữ liệu." << endl;
    } else {
        // Tính trung bình
        double average = total / count;

        // Hiển thị kết quả
        cout << "Số nhỏ nhất trong mảng: " << lowest << endl;
        cout << "Số lớn nhất trong mảng: " << highest << endl;
        cout << "Tổng các số trong mảng: " << total << endl;
        cout << "Trung bình các số trong mảng: " << average << endl;
    }

    return 0;
}

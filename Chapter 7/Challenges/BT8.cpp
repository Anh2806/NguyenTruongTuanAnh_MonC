#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 3;

// Kiểm tra xem một mảng hai chiều có phải là hình vuông ma thuật Lo Shu hay không
bool isLoShuSquare(const vector<vector<int>>& square) {
    // Tổng cố định cho hàng, cột và đường chéo
    int targetSum = 15;

    // Kiểm tra tổng các hàng
    for (int i = 0; i < SIZE; ++i) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; ++j) {
            rowSum += square[i][j];
        }
        if (rowSum != targetSum) {
            return false;
        }
    }

    // Kiểm tra tổng các cột
    for (int j = 0; j < SIZE; ++j) {
        int colSum = 0;
        for (int i = 0; i < SIZE; ++i) {
            colSum += square[i][j];
        }
        if (colSum != targetSum) {
            return false;
        }
    }

    // Kiểm tra tổng đường chéo chính
    int mainDiagonalSum = 0;
    for (int i = 0; i < SIZE; ++i) {
        mainDiagonalSum += square[i][i];
    }
    if (mainDiagonalSum != targetSum) {
        return false;
    }

    // Kiểm tra tổng đường chéo phụ
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < SIZE; ++i) {
        secondaryDiagonalSum += square[i][SIZE - 1 - i];
    }
    if (secondaryDiagonalSum != targetSum) {
        return false;
    }

    // Nếu qua tất cả các kiểm tra, mảng là hình vuông ma thuật Lo Shu
    return true;
}

int main() {
    // Mảng kiểm tra
    vector<vector<int>> loShuSquare = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    // Kiểm tra xem mảng có phải là hình vuông ma thuật Lo Shu không
    if (isLoShuSquare(loShuSquare)) {
        cout << "Mang la hinh vuong ma thuat Lo Shu.\n";
    } else {
        cout << "Mang khong phai la hinh vuong ma thuat Lo Shu.\n";
    }

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

const int MONTHS = 3;
const int DAYS_PER_MONTH = 30;

// Khai báo hàm
void DocDuLieuThoiTiet(char duLieuThoiTiet[][DAYS_PER_MONTH]);
void HienThiBaoCaoHangThang(const char duLieuThoiTiet[][DAYS_PER_MONTH]);
void HienThiTongSoNgay(const char duLieuThoiTiet[][DAYS_PER_MONTH]);
void HienThiThangNhieuNgayMuaNhat(const char duLieuThoiTiet[][DAYS_PER_MONTH]);

int main() {
    char duLieuThoiTiet[MONTHS][DAYS_PER_MONTH];


    DocDuLieuThoiTiet(duLieuThoiTiet);

    HienThiBaoCaoHangThang(duLieuThoiTiet);

    HienThiTongSoNgay(duLieuThoiTiet);

    HienThiThangNhieuNgayMuaNhat(duLieuThoiTiet);

    return 0;
}

void DocDuLieuThoiTiet(char duLieuThoiTiet[][DAYS_PER_MONTH]) {
    ifstream inputFile("RainOrShine.txt");

    if (!inputFile) {
        cerr << "loi khi mo tep tin. thoat chuong trinh.\n";
        exit(1);
    }

    for (int i = 0; i < MONTHS; ++i) {
        for (int j = 0; j < DAYS_PER_MONTH; ++j) {
            inputFile >> duLieuThoiTiet[i][j];
        }
    }

    inputFile.close();
}

void HienThiBaoCaoHangThang(const char duLieuThoiTiet[][DAYS_PER_MONTH]) {
    char dieuKien[] = {'R', 'C', 'S'};
    
    cout << "Bao cao hang thang:\n";
    for (int i = 0; i < MONTHS; ++i) {
        cout << "Tháng " << (i + 6) << ":\t";
        for (int j = 0; j < DAYS_PER_MONTH; ++j) {
            cout << duLieuThoiTiet[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void HienThiTongSoNgay(const char duLieuThoiTiet[][DAYS_PER_MONTH]) {
    int ngayMua = 0, ngayAmU = 0, ngayNang = 0;

    for (int i = 0; i < MONTHS; ++i) {
        for (int j = 0; j < DAYS_PER_MONTH; ++j) {
            if (duLieuThoiTiet[i][j] == 'R') {
                ngayMua++;
            } else if (duLieuThoiTiet[i][j] == 'C') {
                ngayAmU++;
            } else if (duLieuThoiTiet[i][j] == 'S') {
                ngayNang++;
            }
        }
    }

    cout << "Tong so ngay:\n";
    cout << "Mua: " << ngayMua << " ngày\n";
    cout << "Am U: " << ngayAmU << " ngày\n";
    cout << "Nang: " << ngayNang << " ngày\n";
    cout << endl;
}

void HienThiThangNhieuNgayMuaNhat(const char duLieuThoiTiet[][DAYS_PER_MONTH]) {
    int thangNhieuNgayMuaNhat = -1;
    int maxNgayMua = 0;

    for (int i = 0; i < MONTHS; ++i) {
        int ngayMua = 0;
        for (int j = 0; j < DAYS_PER_MONTH; ++j) {
            if (duLieuThoiTiet[i][j] == 'R') {
                ngayMua++;
            }
        }

        if (ngayMua > maxNgayMua) {
            maxNgayMua = ngayMua;
            thangNhieuNgayMuaNhat = i;
        }
    }

    cout << "Thang co nhieu ngay mua nhat: " << (thangNhieuNgayMuaNhat + 6) << endl;
    cout << "So ngay mua: " << maxNgayMua << " ngày\n";
}

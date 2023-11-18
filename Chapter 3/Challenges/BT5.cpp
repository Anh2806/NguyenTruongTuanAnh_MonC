#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int soNam,soNu;
    cout << "Nhap so nam trong lop: ";
    cin >> soNam;
    cout << "Nhap so nu trong lop: ";
    cin >> soNu;
    double tyLeNam = static_cast<double>(soNam) / (soNam + soNu);
    double tyLeNu = static_cast<double>(soNu) / (soNam + soNu);
    cout << setprecision(2) << fixed;
    cout << "Ty le cua nam trong lop" << tyLeNam << "%" << endl;
    cout << "Ty le cua nu trong lop " << tyLeNu << "%" << endl;
}
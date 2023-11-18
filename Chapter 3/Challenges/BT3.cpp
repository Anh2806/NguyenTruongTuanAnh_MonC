#include <iostream>
using namespace std;

int main()
{
    double diem1,diem2,diem3,diem4,diem5;
    cout << "Diem kiem tra mon 1: ";
    cin >> diem1;
    cout << "Diem kiem tra mon 2: ";
    cin >> diem2;
    cout << "Diem kiem tra mon 3: ";
    cin >> diem3;
    cout << "Diem kiem tra mon 4: ";
    cin >> diem4;
    cout << "Diem kiem tra mon 5: ";
    cin >> diem5;
    double Tongtb = (diem1 + diem2 + diem3 + diem4 + diem5)/ 5.0;
    cout << "Tong trung binh cac mon la: " << Tongtb << endl;
    return 0;
}
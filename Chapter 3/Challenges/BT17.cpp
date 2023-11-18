#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    srand(time(0));
    int so1 = rand() % 1000;
    int so2 = rand() % 1000;
    double tong = so1 + so2;
    cout << " " << so1 << endl;
    cout << "+ " << so2 << endl;
    cout << "-----" << endl;
    int Traloi;
    cout << "Nhap cau tra loi: ";
    cin >> Traloi;

    if (tong == Traloi){
        cout << "ket qua dung, ket qua he thong la: " << tong << endl;
    }
    else {
        cout << "ket qua sai, ket qua he thong la: " << tong << endl;
    }
    
    return 0;
}
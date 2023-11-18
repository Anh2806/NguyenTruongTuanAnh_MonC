#include <iostream>
using namespace std;

int main(){
    double Xang;
    double Km;
    cout << "So xang ma oto co the  chua: ";
    cin >> Xang;
    cout << "So km oto di duoc khi day binh: ";
    cin >> Km;
    double Somoididuoc = Km / Xang;
    cout << "moi 1 binh day xang tren km la: " <<Somoididuoc << "Km/xang" << endl;
    return 0;
}
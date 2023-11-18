#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double duong = 1.5;
    const double coc = 1;
    const double botmi = 2.75;
    int ChiecBQ = 48;
    int Bq;
    double SoluongDuong =   duong / ChiecBQ;
    cout << "So luong duong lam 1 cai banh quy: " << SoluongDuong << endl;
    double SoluongCoc =  coc / ChiecBQ ;
    cout << "So luong coc lam 1 cai banh quy: " << SoluongCoc << endl;
    double SoluongBotmi = botmi / ChiecBQ ;
    cout << "So luong coc lam 1 cai banh quy: " << SoluongBotmi << endl;
    cout << " Nhap so binh quy can lam: ";
    
    cin >> Bq;
    double BotMi = SoluongBotmi * Bq;
    double Coc = SoluongCoc * Bq;
    double Duong = SoluongDuong * Bq;
    cout << "So luong duong can dung la: " << Duong << endl;
    cout << "So luong coc can dung la: " << Coc << endl;
    cout << "So luong bot mi can dung la: " << BotMi << endl;
    cout << fixed << setprecision(2)  << endl;
    return 0;
}
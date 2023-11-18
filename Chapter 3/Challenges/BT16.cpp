#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double MIEN_CHO_NGUOI_CAO_TUOI = 5000;
    const double SO_THANG_TRONG_NAM = 12;
    double giaTriDinhGia,thuebatdongsanNam,HoadonHangthang ;
    double giaTriThucTe, thuesuat;
    cout << "Nhap gia tri thuc te: ";
    cin >> giaTriThucTe;
    cout << "nhap thue suat hien tai cho moi 100USD gia tri danh gia: ";
    cin >> thuesuat;
    giaTriDinhGia = giaTriThucTe * 0.6;
    thuebatdongsanNam = (giaTriDinhGia / 100) *2.64;
    HoadonHangthang = thuebatdongsanNam * SO_THANG_TRONG_NAM;
    thuebatdongsanNam =  MIEN_CHO_NGUOI_CAO_TUOI-thuebatdongsanNam ;
    cout << "Bao cao muc thue bat dong san hang nam ma chu so huu:$"<< fixed <<setprecision(2) << thuebatdongsanNam << endl;
    cout << "hoa dong thue hang quy:$"<<fixed << setprecision(2) << HoadonHangthang << endl;
    return 0;
    
}
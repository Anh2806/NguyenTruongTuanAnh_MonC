#include <iostream>

int main() {
    
    int tongKhachHang = 16500;
    double tiLeKhachMuaCaffeine = 0.15;
    double tiLeUaThichCam = 0.58;

    int khachMuaCaffeine = tongKhachHang * tiLeKhachMuaCaffeine;
    int khachUaThichCam = khachMuaCaffeine * tiLeUaThichCam;

    std::cout << "So luong gan dung cua khac mua hang mmua it nhat 1 chai cafein: " << khachMuaCaffeine << std::endl;
    std::cout << "So luong gan dung cua khac mua hang ua thich do uong vi cam: " << khachUaThichCam << std::endl;

    return 0;
}

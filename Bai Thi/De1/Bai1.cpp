#include <iostream>

using namespace std;
class MayLoc {


protected:
     // Corrected: Added const
    // virtual float congSuat() const;
    float m_tgian;
public:
    
    MayLoc();
    virtual float congSuat() const;
    void setTgian(float t);
    float tinhLuongNuoc() const; // Corrected: Added const
};

MayLoc::MayLoc() {
    this->m_tgian = 0;
}

void MayLoc::setTgian(float t) {
    this->m_tgian = t;
}

float MayLoc::tinhLuongNuoc() const {
    return congSuat() * m_tgian;
}

float MayLoc::congSuat() const {
    return 0;
}

// ...

class MayLyTam : public MayLoc {
private:
    float m_cs;

protected:
    float congSuat() const override; // Corrected: Added const and override

public:
    MayLyTam(float cs, float t);
};

MayLyTam::MayLyTam(float cs, float t) {
    this->m_cs = cs;
    this->setTgian(t);
}

float MayLyTam::congSuat() const {
    return this->m_cs;
}

int main(){
    
    MayLoc *pm = new MayLoc();
    delete pm;
    if (pm->congSuat() < 5)  /*Trong main chỉ có thể truy cập vào cá thuộc tính và thành phần public c*/
    {
        MayLyTam ml(81.9, 10);
        pm = &ml; /* Lỗi thực thi => pm đã được cấp phát một vùng nhớ có kiểu MayLoc do đó ở đây ta cho pm quản lý địa chỉ của m1 là sai, mặc khác m1 có chu kì sống chỉ trong đoạn lệnh 4-9 */
        cout << "Luong nuoc = "
            << pm ->tinhLuongNuoc();
    }
    /* Lỗi thực thi => pm đã đánh mất địa chỉ quản lý ban đầu do đó nếu ta delete pm thì chương trình sẽ không thể gi phóng vùng nhớ ban đầu đã cấp phát.*/
    return 0;

}

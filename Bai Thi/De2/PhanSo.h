#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>

using namespace std;

class PhanSo {
private:
	int tu, mau;
public:
	//constructor, hay co the goi la phuong thuc khoi tao hoac ep kieu du lieu
	PhanSo(int tu = 0, int mau = 1){ 
		this->tu = tu;
		this->mau = mau;	
		
		}
	//Phuong thuc cong (+)
	PhanSo operator+(const PhanSo& ps){
		int tuMoi = tu * ps.mau + mau * ps.tu;
	        int mauMoi = mau * ps.mau;
	        return PhanSo(tuMoi, mauMoi);
	}

	//Phuong thuc tang (++)
	PhanSo& operator++(){ //dung` & de tra ve tham chieu thay vi ban sao
		tu += mau;
		return *this;
	}
	//ham tim uoc chung lon nhat (dung de rut gon tu va mau cho phuong thuc + va +=, co the co hoac khong)
	int UCLN(int a, int b) {
	        while (b != 0) {
	            	int temp = a % b;
	            	a = b;
	            	b = temp;
	        }
	        return abs(a);
	   }
	//Phuong thuc tang 1 luong (+=)
	PhanSo& operator+=(const PhanSo& ps){
		tu = tu * ps.mau + mau * ps.tu;
	        mau *= ps.mau;

	        int ucln = UCLN(tu, mau);
	        tu /= ucln;
	        mau /= ucln;

	        return *this;
	}
	//ham chuyen, phuong thuc ep kieu
	operator int() const {
	        return tu / mau;
	}
	//ham print, phuong thuc in, cout, etc... <<
	friend ostream& operator<<(ostream& os, const PhanSo& ps){
		os << ps.tu << "/" << ps.mau;
    		return os;
	}
};
#endif
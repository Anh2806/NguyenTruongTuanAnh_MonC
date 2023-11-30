#include <iostream>
using namespace std;

class DongVat{
public:
	virtual void Keu(){
		cout << "Dong vat keu ..." << endl;
	}
};

class Meo : public DongVat{
public:
	void Keu() override {
		cout << "Keu meo meo" << endl;
	}
};

class Cho : public DongVat{
public:
	void Keu() override {
		cout << "Keu gau gau" << endl;
	}
};

int main() {
    DongVat* dongvat1 = new Meo();
    DongVat* dongvat2 = new Cho();
    dongvat1->Keu(); 
    dongvat2->Keu(); 
    delete dongvat1;
    delete dongvat2;
    return 0;
}
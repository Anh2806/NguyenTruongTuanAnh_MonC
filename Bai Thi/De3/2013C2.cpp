#include <iostream>
using namespace std;

//----------------Vi du ham huy ao ----------------------
class DongVat {
public:
    virtual ~DongVat() {
        cout << "Ham huy DongVat" << endl;
    }
};

class Meo : public DongVat {
public:
    ~Meo() {
        cout << "Ham huy Meo" << endl;
    }
};
//---------------------------------------------------------

//---------------Vi du khong goi ham huy ao------------
class DongVat {
public:
    ~DongVat() {
        cout << "Ham huy DongVat" << endl;
    }
};

class Meo : public DongVat {
public:
    ~Meo() {
        cout << "Ham huy Meo" << endl;
    }
};
//----------------------------------------------------------
int main() {
    DongVat* ptr = new Meo();
    delete ptr;  // chi goi ham huy cua lop DongVat
    return 0;
}

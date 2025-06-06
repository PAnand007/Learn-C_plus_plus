#include <iostream>
using namespace std;

class NoVirtual {
    int x;
};

class WithVirtual {
    int x;
    virtual void show() {}
};

int main() {
    cout << "Size of NoVirtual: " << sizeof(NoVirtual) << " bytes" << endl;
    cout << "Size of WithVirtual: " << sizeof(WithVirtual) << " bytes" << endl;
    return 0;
}

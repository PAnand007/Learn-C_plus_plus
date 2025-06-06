#include <iostream>
using namespace std;

// 1. Normal function example
class NormalBase {
public:
    void show() {
        cout << "NormalBase's show()" << endl;
    }
};

class NormalDerived : public NormalBase {
public:
    void show() {
        int x =5;
        cout << x<<"NormalDerived's show()" << endl;
    }
};

// 2. Virtual function example
class VirtualBase {
public:
    virtual void show() {
        cout << "VirtualBase's show()" << endl;
    }
};

class VirtualDerived : public VirtualBase {
public:
    void show() override {
        cout << "VirtualDerived's show()" << endl;
    }
};

// 3. Pure virtual function example (abstract class)
class PureVirtualBase {
public:
    virtual void show() = 0;  // Pure virtual
};

class PureVirtualDerived : public PureVirtualBase {
public:
    void show() override {
        cout << "PureVirtualDerived's show()" << endl;
    }
};

int main() {
    cout << "----- Normal Function -----" << endl;
    NormalBase* normalPtr = new NormalDerived();
    normalPtr->show();   // Calls NormalBase's show() — no polymorphism

    cout << "\n----- Virtual Function -----" << endl;
    VirtualBase* virtualPtr = new VirtualDerived();
    virtualPtr->show();  // Calls VirtualDerived's show() — runtime polymorphism

    cout << "\n----- Pure Virtual Function -----" << endl;
    PureVirtualBase* pureVirtualPtr = new PureVirtualDerived();
    pureVirtualPtr->show();  // Calls PureVirtualDerived's show()

    // Clean up
    delete normalPtr;
    delete virtualPtr;
    delete pureVirtualPtr;

    return 0;
}

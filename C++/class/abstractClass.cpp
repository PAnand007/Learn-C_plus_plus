#include <iostream>
using namespace std;

class Abstract {
public:
    virtual void show() = 0;  // Pure virtual
    virtual void disp() = 0;
};

class Derived : public Abstract {
public:
    void show() override {
        cout << "Derived class implementation of show()" << endl;
    }

    // it make mandotory to use all functions of base class
    void disp(){

    }
};

int main() {
    // Abstract obj;      // ❌ Error: can't instantiate abstract class
    Derived d;            // ✅ OK
    Abstract* ptr = &d;   // ✅ Base class pointer
    ptr->show();          // Runtime polymorphism
    return 0;
}

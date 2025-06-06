#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {  // Virtual function
        cout << "This is class A's show()" << endl;
    }
};

class B : public A {
public:
    void show() override {  // Override base class virtual function
        cout << "This is class B's show()" << endl;
    }
};

class C : public B {
public:
    void show() override {
        A::show();  // Explicitly calling A's show
        B::show();  // Explicitly calling B's show
        cout << "This is class C's show()" << endl;
    }
};

int main() {
    A* ptr;       // Pointer of base class type
    C objC;       // Object of most derived class

    ptr = &objC;  // Base class pointer points to derived class object

    ptr->show();  // Calls C's version due to virtual dispatch

    return 0;
}

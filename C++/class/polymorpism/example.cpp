#include <iostream>
using namespace std;

class Example {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Example() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void showAccess() {
        // All members accessible inside the class
        cout << "Inside class:" << endl;
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

// Derived Class
class Derived : public Example {
public:
    void accessBaseMembers() {
        cout << "\nInside Derived class:" << endl;
        // cout << "Private: " << privateVar << endl; // ❌ Not accessible
        cout << "Protected: " << protectedVar << endl; // ✅ Accessible
        cout << "Public: " << publicVar << endl;       // ✅ Accessible
    }
};

int main() {
    Example EX;
    EX.showAccess();

    Derived D;
    D.accessBaseMembers();

    // Outside the class
    cout << "\nFrom main function:" << endl;
    // cout << EX.privateVar << endl;   // ❌ Not accessible
    // cout << EX.protectedVar << endl; // ❌ Not accessible
    cout << "Public: " << EX.publicVar << endl; // ✅ Only public accessible

    return 0;
}

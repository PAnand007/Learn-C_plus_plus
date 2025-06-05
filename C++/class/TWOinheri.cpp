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
        cout << "\nInside derived class:" << endl;
        // cout << "Private: " << privateVar << endl;  ❌ Not accessible
        // Private member is not accessible in derived class
        // Only protected and public members are accessible
        // cout << "Private: " << privateVar << endl; // error
        cout << "Protected: " << protectedVar << endl;
        cout << "Public: " << publicVar << endl;
    }
};

int main() {
    Example obj;
    obj.showAccess();

    cout << "\nFrom main function:" << endl;
    // cout << obj.privateVar << endl;   ❌ Not accessible
    // cout << obj.protectedVar << endl; ❌ Not accessible
    cout << "Public: " << obj.publicVar << endl; // ✅ Only public accessible

    Derived d;
    d.accessBaseMembers();

    return 0;
}

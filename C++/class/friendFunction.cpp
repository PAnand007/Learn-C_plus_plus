#include <iostream>
using namespace std;

class MyClass {
private:
    int secret;

public:
    MyClass() : secret(42) {}

    // Friend function declaration
    friend void revealSecret(MyClass& obj);
};

// Friend function definition
void revealSecret(MyClass& obj) {
    // Access private member directly
    cout << "The secret value is: " << obj.secret << endl;
}

int main() {
    MyClass obj;
    revealSecret(obj);  // Allowed, friend function can access private members
    return 0;
}

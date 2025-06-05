#include <iostream>
using namespace std;

class Test {
public:
    static int x;
    void increment() {
        x++;
    }
    void show() {
        cout << "x = " << x << endl;
    }
};

int Test::x = 4;  // Static variable definition

int main() {
    Test t1, t2;
    t1.increment();
       t1.show();  // x = 2
    t2.increment();
    t1.show();  // x = 2
    return 0;
}

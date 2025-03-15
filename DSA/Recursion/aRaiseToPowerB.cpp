#include <iostream>
using namespace std; 
int power(int a, int b) {
    if (a == 0 && b == 0) {
        cout << "invalid and zeros o0o" << endl;
        return -1;  
    }
    if (b == 0) {
        return 1; 
    }
    return a * power(a, b - 1);
}

int main() {
    int result = power(7, 2); 
    cout << result << endl;  
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a, b, i;
    double product = 1;  // Changed to double to handle fractional results for negative powers
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;

    if (b > 0) {
        for (i = 1; i <= b; i++) {
            product *= a;
        }
        cout << a << " raised to the power " << b << " is " << product << '.' << endl;
    } else if (b < 0) {
        for (i = 1; i <= -b; i++) {
            product *= a;
        }
        cout << a << " raised to the power " << b << " is " << "1/" << product << " or " << 1.0 / product << '.' << endl;
    } else {
        cout << a << " raised to the power " << b << " is 1." << endl;
    }

    return 0;
}

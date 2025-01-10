#include<iostream>
using namespace std;

int main(){
    int a = 1, b = 1, n, sum;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n == 1 || n == 2) {
        cout << "Fibonacci number at position " << n << " is 1" << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            sum = a + b;
            a = b;
            b = sum;
        }
        cout << "Fibonacci number at position " << n << " is " << sum << endl;
    }

    return 0;
}

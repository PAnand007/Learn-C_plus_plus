#include <iostream>

using namespace std;

int power(int a, int b) {
    if (b == 0) {
        return 1; // Base case: a^0 = 1
    } else if (b % 2 == 0) {
        int halfPower = power(a, b / 2);
        return halfPower * halfPower; // Even exponent
    } else {
        return a * power(a, b - 1); // Odd exponent
    }
}

int main() {
    int result = power(6, 5);  // Calculate 6^5
    cout << result << endl;   // Output the result
    return 0;
}

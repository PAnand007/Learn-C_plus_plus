#include <iostream>
using namespace std;

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1; // base = 2^0
    while (binary > 0) {
        int lastDigit = binary % 10; // Extract last digit
        decimal += lastDigit * base; // Multiply with power of 2 and add
        base *= 2;  // Increase power of 2
        binary /= 10; // Remove last digit
    }
    return decimal;
}

// int binaryToDecimal(long long binary) {
//     int decimal = 0;
//     int base = 1;  // Initializing base to 2^0 (1)
    
//     // Count number of digits in binary number
//     int length = 0;
//     long long temp = binary;
//     while (temp > 0) {
//         temp /= 10;
//         length++;
//     }
    
//     // Convert binary to decimal using a for loop
//     for (int i = 0; i < length; i++) {
//         int lastDigit = binary % 10;  // Get the last binary digit
//         decimal += lastDigit * base;  // Add the corresponding value to decimal
//         base *= 2;  // Multiply base by 2 (to simulate powers of 2)
//         binary /= 10;  // Remove the last digit from binary
//     }

//     return decimal;
// }

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}

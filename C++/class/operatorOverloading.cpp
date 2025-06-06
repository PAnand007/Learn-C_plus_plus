#include <iostream>
using namespace std;

//cant overload these ===  . dot, ?: condition, :: scope, sizeof 

class Complex {
public:
    double real;
    double imag;

    // Constructor to set real and imaginary parts
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator to add two complex numbers
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;   // Add real parts
        temp.imag = imag + other.imag;   // Add imaginary parts
        return temp;
    }

    // Show the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);    // 2 + 3i
    Complex c2(1, 4);    // 1 + 4i

    Complex result = c1 + c2;   // Add c1 and c2

    cout << "Sum: ";
    result.display();  // Output: 3 + 7i

    return 0;
}

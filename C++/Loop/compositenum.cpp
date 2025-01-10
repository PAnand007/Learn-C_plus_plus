#include<iostream>
using namespace std;

int main(){
    int n;
    bool isComposite = false;

    cout << "Enter the number to check if it is composite: " << endl;
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither prime nor composite." << endl;
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                isComposite = true;
                break;
            }
        }

        if (isComposite) {
            cout << n << " is a composite number." << endl;
        } else {
            cout << n << " is a prime number." << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <cmath> //header file for other functions
using namespace std;

//using functions
int fact(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    return fact; // returning the factorial value
}
int combination(int n, int r){
    int nCr =  fact(n) / (fact(r) * fact(n-r));
}
int permutation(int n, int r){
    int nPr = fact(n) / fact(n-r);
}

int main() {
    int n, r;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    cout<<"nCr = "<<combination(n,r)<<endl;
    cout<<"nPr = "<<permutation(n,r)<<endl;

    return 0;
}




// int main() {
//     int n, r;
//     cout << "Enter n: " << endl;
//     cin >> n;
//     cout << "Enter r: " << endl;
//     cin >> r;

//     int nfact = 1;
//     for (int i = 2; i <= n; i++) {
//         nfact *= i;
//     }

//     int rfact = 1;
//     for (int i = 2; i <= r; i++) {
//         rfact *= i;
//     }

//     int nrfact = 1;
//     for (int i = 2; i <= (n - r); i++) {
//         nrfact *= i;
//     }

//     int ncr = nfact / (rfact * nrfact);
//     cout << ncr << endl;

//     return 0;
// }

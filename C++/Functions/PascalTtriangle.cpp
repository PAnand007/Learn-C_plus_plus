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

int main() {
    int n, r;
    cout << "Enter the number: ";
   cin>>n;
   for (int i = 0; i <=n ; i++)
   {
    for (int j = 0; j <=i; j++)
    {
        cout<<combination(i,j)<<" ";
    }
    cout<<endl;
   }
    return 0;
}



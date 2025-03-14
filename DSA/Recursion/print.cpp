#include <iostream>

using namespace std;

void print(int n, int i = 1) {
    if (i > n) return;
    cout << i << " ";
    print(n, i + 1);
}

void print2(int i, int n){
    if (i<n)
    {
        cout << i << " ";
    }
    print2(i+1,n);
    
}

int main() {
    print(6);
    print2(1,7);
    return 0;
}

#include <iostream>

using namespace std;

void sum(int n, int total) {
    if (n == 0)  {
        cout << total << endl; 
        return;
    }
    sum(n - 1, total + n);
}

int main() {
    sum(6, 0);
    return 0;
}

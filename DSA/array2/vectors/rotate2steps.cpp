#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& v) {
    // Printing the array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void rotate(vector<int>& v, int k) {
    int n = v.size();
    k = k % n; // To handle if k is greater than the size of the array

    for (int i = 0; i < k; i++) {
        int temp = v[n - 1];
        for (int j = n - 1; j > 0; j--) {
            v[j] = v[j - 1];
        }
        v[0] = temp;
    }
}

int main() {
    vector<int> v = {4, 5, 3, 1, 2, 6, 7, 8, 9, 33};
    int k = 15; // Number of steps to rotate the array

    rotate(v, k);
    display(v);

    return 0;
}

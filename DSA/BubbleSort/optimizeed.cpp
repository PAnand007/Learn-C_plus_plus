#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v(7);
    int n = v.size();
    cout << "Enter the digits" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Before" << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                flag = true;
            }
        }
        if (!flag) break;  // If no swaps happened, array is sorted
    }

    cout << endl;
    cout << "After" << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

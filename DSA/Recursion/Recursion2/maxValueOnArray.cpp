#include <iostream>

using namespace std;

void display(int arr[], int n, int idx = 0) {
    if (idx == n) return;
    cout << arr[idx] << " ";
    display(arr, n, idx + 1);
}

void printMax(int arr[], int n, int idx = 0, int max = 0) {
    if (idx == n) {
        cout << max;
        return;
    }
    if (arr[idx] > max) max = arr[idx];
    printMax(arr, n, idx + 1, max);
}

int main() {
    int arr[6] = {1, 3, 5, 7, 90, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);
    cout << endl; 

    // make using in built function of max
    

    printMax(arr, n);

    return 0;
}

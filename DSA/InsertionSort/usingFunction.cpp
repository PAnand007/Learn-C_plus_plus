#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  
    
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 5, 4, 6, 3, 58, 3, 1, 0, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting:" << endl;
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "After Sorting:" << endl;
    printArray(arr, n);

    return 0;
}

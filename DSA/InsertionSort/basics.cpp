#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int arr[] = {4, 5, 4, 6, 3, 58, 3, 1, 0, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Before Sorting:" << endl;
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

        //Inserion Sort 
    // 5 3 1 4 2 -> Unsorted
    // 5 | 3 1 4 2  swap to left element if it is smaller untill it is smaller [many times] then the left element 
    // 3 5 | 1 4 2
    // 1 3 5 | 4 2
    // 1 3 4 5 | 2
    // 1 2 3 4 5 | ->sorted

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
     
    cout << "After Sorting:" << endl;
    for (int ele : arr) {
        cout << ele << " ";
    }

    return 0;
}

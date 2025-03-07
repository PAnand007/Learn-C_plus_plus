#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int arr[] = {4, 5, 4, 6, 3, 58, 3, 1, 0, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Before Sorting:" << endl;
    // for (int i = 0; i < n; i++) { 
    //     cout << arr[i] << " ";
    // }
    // cout << endl << "For-Each Loop:" << endl;

    // for-each loop
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl << "After Sorting:" << endl;

    // Selection sort
    for (int i = 0; i < n - 1; i++) {
        int min = 654236;
        int mindx = -1;
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }

    for (int ele : arr) {
        cout << ele << " ";
    }

    return 0;
}

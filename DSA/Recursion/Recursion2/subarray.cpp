// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++) {  // Start index
//         for (int j = i; j < n; j++) {  // End index
//             for (int k = i; k <= j; k++) {  // Print elements from i to j
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

void printSubarrays(int arr[], int start, int end, int n) {
    if (start == n) return;
    if (end == n) {
        printSubarrays(arr, start + 1, start + 1, n);
        return;
    }

    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    printSubarrays(arr, start, end + 1, n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printSubarrays(arr, 0, 0, n);
    return 0;
}


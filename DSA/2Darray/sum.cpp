#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 32, 8}, {9, 0, 11, 12}, {13, 14, 15, 16}};
    int numRows = sizeof(arr) / sizeof(arr[0]);
    int numCols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int sum = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
           sum += arr[i][j];
        }
    }
    cout << "Sum of all elements in the array is: " << sum << endl;


    return 0;
}

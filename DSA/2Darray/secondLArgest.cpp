#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 32, 8}, {9, 0, 11, 12}, {13, 14, 15, 16}};
    int numRows = sizeof(arr) / sizeof(arr[0]);
    int numCols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int maxNum = arr[0][0];

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (arr[i][j] > maxNum) {
                maxNum = arr[i][j];
            }
        }
    }


    int maxNum2nd = arr[0][0];

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (arr[i][j] > maxNum2nd && arr[i][j] != maxNum) {
                maxNum2nd = arr[i][j];
            }
        }
    }


    cout << "The maximum number in the 2D array is: " << maxNum << endl;
    cout << "The maximum number in the 2D array is: " << maxNum2nd << endl;   

    return 0;
}

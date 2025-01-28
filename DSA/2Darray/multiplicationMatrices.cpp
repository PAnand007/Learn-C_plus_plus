#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[2][4] = {{1, 2,1,2}, {3, 4,3,4}};
    int arr2[4][2] = {{1, 2}, {3, 4},{1, 2}, {3, 4}};

    int rows_arr = sizeof(arr) / sizeof(arr[0]);
    int cols_arr = sizeof(arr[0]) / sizeof(arr[0][0]);

    int rows_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    int cols_arr2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);

    // multiplication possibilty
    if (cols_arr == rows_arr2) {
        cout << "Matrix multiplication is possible." << endl;
        // Use Multiplication
         vector<vector<int>> nextarr(rows_arr, vector<int>(cols_arr2, 0));
        for (int i = 0; i < rows_arr; i++) {
            for (int j = 0; j < cols_arr2; j++) {
                for (int k = 0; k < cols_arr; k++) {
                 nextarr[i][j] += arr[i][k] * arr2[k][j];
                    }
                }
            }
                     
    } else {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    // Use vector instead of fixed-size array
    vector<vector<int>> nextarr(rows_arr, vector<int>(cols_arr2, 0));

    // Perform matrix multiplication
    for (int i = 0; i < rows_arr; i++) {
        for (int j = 0; j < cols_arr2; j++) {
            for (int k = 0; k < cols_arr; k++) {
                nextarr[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    // Print matrices
    cout << "arr:" << endl;
    for (int i = 0; i < rows_arr; i++) {
        for (int j = 0; j < cols_arr; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "arr2:" << endl;
    for (int i = 0; i < rows_arr2; i++) {
        for (int j = 0; j < cols_arr2; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "nextarr (result of multiplication):" << endl;
    for (int i = 0; i < rows_arr; i++) {
        for (int j = 0; j < cols_arr2; j++) {
            cout << nextarr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

// Example 1:
// Input: n = 3
// Output: [[1,2,3],[8,9,4],[7,6,5]]
// Example 2:

// Input: n = 1
// Output: [[1]]


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows/columns (n x n matrix): ";
    cin >> n;

    vector<vector<int>> v; // Declare an empty 2D vector

    cout << "Enter the matrix elements:" << endl;
    int count = 1; // To fill the matrix sequentially
    for (int i = 0; i < n; i++) {
        vector<int> row; // Temporary vector for each row
        for (int j = 0; j < n; j++) {
            row.push_back(count++); // Add elements sequentially
        }
        v.push_back(row); // Add the completed row to the 2D vector
    }

    cout << "Matrix elements:" << endl;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

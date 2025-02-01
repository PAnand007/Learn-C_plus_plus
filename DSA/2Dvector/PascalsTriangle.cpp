#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascal(int numRows) {
    vector<vector<int>> v;
    for (int i = 0; i < numRows; i++) {
        vector<int> a(i + 1, 1);
        for (int j = 1; j < i; j++) {
            a[j] = v[i - 1][j - 1] + v[i - 1][j];
        }
        v.push_back(a);
    }
    return v;
}

int main() {
    int numRows = 5;
    vector<vector<int>> v = pascal(numRows);

    // Display Pascal's Triangle
    cout << "Here is your Pascal's Triangle:" << endl;
    for (const auto& row : v) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> pascal(int numRows) {
//     vector<vector<int>> v(numRows);

//     // Generate Pascal's Triangle
//     for (int i = 0; i < numRows; i++) {
//         v[i].resize(i + 1); // Resize each row to correct size

//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || j == i) {
//                 v[i][j] = 1; // First and last elements of each row are 1
//             } else {
//                 v[i][j] = v[i - 1][j - 1] + v[i - 1][j]; // Pascal's Triangle formula
//             }
//         }
//     }
//     return v; // Return the completed Pascal's Triangle
// }

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     vector<vector<int>> v = pascal(n);

//     // Display Pascal's Triangle
//     cout << "Here is your Pascal's Triangle:" << endl;
//     for (const auto& row : v) {
//         for (int num : row) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;



// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     vector<vector<int>> v(n);

//     // Generate Pascal's Triangle
//     for (int i = 0; i < n; i++) {
//         v[i].resize(i + 1); // Resize the row to fit (i+1) elements
//         v[i][0] = v[i][i] = 1; // First and last element of each row is 1

//         for (int j = 1; j < i; j++) {
//             v[i][j] = v[i - 1][j - 1] + v[i - 1][j]; // Pascal's Triangle Formula
//         }
//     }

//     // Display Pascal's Triangle
//     cout << "Here is your Pascal's Triangle: " << endl;
//     for (const auto& row : v) {
//         for (int num : row) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     vector<vector<int>> v(n);

//     // Generate Pascal's Triangle using continuity formula
//     for (int i = 0; i < n; i++) {
//         v[i].resize(i + 1);
//         v[i][0] = 1; // First element is always 1
        
//         for (int j = 1; j <= i; j++) {
//             // Using continuity formula to fill Pascal's Triangle
//             v[i][j] = v[i][j - 1] * (i - j + 1) / j;
//         }
//     }

//     // Display Pascal's Triangle
//     cout << "Here is your Pascal's Triangle: " << endl;
//     for (const auto& row : v) {
//         for (int num : row) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


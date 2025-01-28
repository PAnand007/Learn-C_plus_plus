#include <iostream>
using namespace std;

int main() {
    int array[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12}
    };

    int minRow = 0, maxRow = 3;
    int minCol = 0, maxCol = 2;

    while (minRow <= maxRow && minCol <= maxCol) {
        // Print top row (Left to Right)
        for (int col = minCol; col <= maxCol; col++) {
            cout << array[minRow][col] << " ";
        }
        minRow++; // Move the top boundary down

        // Print rightmost column (Top to Bottom)
        for (int row = minRow; row <= maxRow; row++) {
            cout << array[row][maxCol] << " ";
        }
        maxCol--; // Move the right boundary left

        // Print bottom row (Right to Left) if still within bounds
        if (minRow <= maxRow) {
            for (int col = maxCol; col >= minCol; col--) {
                cout << array[maxRow][col] << " ";
            }
            maxRow--; // Move the bottom boundary up
        }

        // Print leftmost column (Bottom to Top) if still within bounds
        if (minCol <= maxCol) {
            for (int row = maxRow; row >= minRow; row--) {
                cout << array[row][minCol] << " ";
            }
            minCol++; // Move the left boundary right
        }
    }

    cout << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int array[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int minRow = 0, maxRow = 2;
//     int minCol = 0, maxCol = 2;

//     while (minRow <= maxRow && minCol <= maxCol) {
//         // Print top row (Left to Right)
//         for (int j = minCol; j <= maxCol; j++) {
//             cout << array[minRow][j] << " ";
//         }
//         minRow++; // Move top boundary down

//         // Print rightmost column (Top to Bottom)
//         for (int i = minRow; i <= maxRow; i++) {
//             cout << array[i][maxCol] << " ";
//         }
//         maxCol--; // Move right boundary left

//         // Print bottom row (Right to Left) if still in bounds
//         if (minRow <= maxRow) {
//             for (int j = maxCol; j >= minCol; j--) {
//                 cout << array[maxRow][j] << " ";
//             }
//             maxRow--; // Move bottom boundary up
//         }

//         // Print leftmost column (Bottom to Top) if still in bounds
//         if (minCol <= maxCol) {
//             for (int i = maxRow; i >= minRow; i--) {
//                 cout << array[i][minCol] << " ";
//             }
//             minCol++; // Move left boundary right
//         }
//     }

//     cout << endl;
//     return 0;
// }

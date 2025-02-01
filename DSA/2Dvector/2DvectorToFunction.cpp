#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector< vector<int>> Vector ;
    vector<int> row1 = {4,1,2,3,3,30};
    vector<int> row2 = {4,6,9,3,5,7,5,3};
    vector<int> row3 = {4,1,2,3,3,30};
    vector<int> row4 = {4,6,5,3};
    vector<int> row5 = {4,1,2,0};
    vector<int> row6 = {4,3};
    //Passing 1D vectors directly in 2D vector
    Vector.push_back(row1);
    Vector.push_back(row2);
    Vector.push_back(row3);
    Vector.push_back(row4);
    Vector.push_back(row5);
    Vector.push_back(row6);

           cout<<"Matrix"<<endl;
    //Print
   for (int i = 0; i < Vector.size(); i++)
   {
    for (int j = 0;  j < Vector[i].size(); j++)
    {
        cout<<Vector[i][j]<<" ";
    }
    cout<<endl;
    
   }
}

// #include <iostream>
// #include <vector>

// using namespace std;

// // Function that returns a lambda function for accessing elements in a 2D vector
// auto createFunction(const vector<vector<int>>& matrix) {
//     return [&matrix](int row, int col) -> int {
//         if (row >= 0 && row < matrix.size() && col >= 0 && col < matrix[row].size()) {
//             return matrix[row][col];
//         } else {
//             throw out_of_range("Index out of bounds");
//         }
//     };
// }

// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     auto getElement = createFunction(matrix);

//     // Test the function
//     cout << "Element at (1,2): " << getElement(1, 2) << endl; // Output: 6
//     cout << "Element at (0,0): " << getElement(0, 0) << endl; // Output: 1

//     return 0;
// }

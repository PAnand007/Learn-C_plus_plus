// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int m;
// //     cout << "Enter No. of students: " << endl;
// //     cin >> m;

// //     int arr[m][2];
// //     for (int i = 0; i < m; i++) {
// //         arr[i][0] = (i + 1); 
// //     }

// //     cout << "Enter the marks of students serialwise:" << endl;
// //     for (int i = 0; i < m; i++) {
// //         cin >> arr[i][1]; 
// //     }

// //     cout << "The 2D array is:" << endl;
// //     for (int i = 0; i < m; i++) {
// //         for (int j = 0; j < 2; j++) {
// //             cout << arr[i][j] << " ";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }


// #include <iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int m;
//     cout << "Enter No. of students: ";
//     cin >> m;

//     int arr[m][2];

//     // Assign serial numbers and input marks in a single loop
//     for (int i = 0; i < m; i++) {
//         arr[i][0] = i + 1; // Assign serial numbers
//         cout << "Enter marks for student " << arr[i][0] << ": ";
//         cin >> arr[i][1]; // Enter marks
//     }

//     cout << "The Marks of students is:" << endl;
//     for (int i = 0; i < m; i++) {
//         cout << arr[i][0] << " " << arr[i][1] << endl;
//     }

//     return 0;
// }

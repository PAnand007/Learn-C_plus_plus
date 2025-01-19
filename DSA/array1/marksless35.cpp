#include<iostream>
using namespace std;
int main(){
    //array
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int marks[n];

    for (int i = 0; i < n-1; i++)
    {
        cin>>marks[i];
    }
    for (int i = 0; i <= n-1; i++)
    {if (marks[i]<35)
    {
        cout<<++i<<" ";
    }   
    }

}

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
    
//     vector<int> marks(n);  // Using vector for dynamic array

//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> marks[i];
//     }

//     cout << "Indices of elements less than 35: ";
//     for (int i = 0; i < n; i++) {
//         if (marks[i] < 35) {
//             cout << i + 1 << " ";  // Output the index (1-based)
//         }
//     }

//     return 0;
// }

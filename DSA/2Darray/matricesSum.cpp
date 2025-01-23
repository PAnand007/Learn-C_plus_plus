#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 32, 8}, {9, 0, 11, 12}, {13, 14, 15, 16}};
    int arr2[4][4] = {{1, 2, 3, 4}, {5, 6, 32, 8}, {9, 0, 11, 12}, {13, 14, 15, 16}};
    int next[4][4];
   
    
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         next[i][j] = (arr[i][j] + arr2[i][j]);
           
    //     }
    // }
    cout << "Sum of matrices are: " << endl;
    
    for (int i = 0; i <= 3 ; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
        //    cout<<next[i][j]<<" ";
        arr[i][j] = arr[i][j]+arr2[i][j];
        }
        cout<<endl;
        
    }

    for (int i = 0; i <= 3 ; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
        //    cout<<next[i][j]<<" ";
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}

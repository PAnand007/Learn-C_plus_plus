#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    //2d array
    int arr[3][3] = {{1,2,3},{5,6,7},{8,9,0}}; //declaration
    // row -> 4 
    //column -> 4
    int n = sizeof(arr[3][3]);
    for (int i = 0; i <= 2 ; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
           cout<<arr[i][j];
        }
        cout<<endl;
        
    }
    

}
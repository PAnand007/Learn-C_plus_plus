#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,5,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int Product = 1;
    for (int i = 0; i <= n-1; i++)
    {
       Product*=arr[i];
    }
    cout << "Product of array elements is: " << Product << endl;
}

#include<iostream>
using namespace std;
int main(){
    //array
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    int product = 1;

    for (int j = 0; j < 5; j++)
    {
        product = product * arr[j];
    }
    
    cout<<product;


}

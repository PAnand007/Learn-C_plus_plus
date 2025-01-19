#include<iostream>
using namespace std;
int main(){
    //array
    int arr[5] = {1,3,4,5,6};
    arr[2] = {9}; //it can be use to initialize 
    
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }



    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }

}
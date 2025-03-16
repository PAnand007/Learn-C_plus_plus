#include<iostream>

using namespace std;

void display(int arr[],int n,int idx = 0){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}

int main(){
    int arr[6] = {1,3,5,7,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
//in vector size is not required
    return 0;
}
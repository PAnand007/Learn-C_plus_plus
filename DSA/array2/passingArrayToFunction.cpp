#include<iostream>
using namespace std;
//call by refference

void display(int a[], int n){
   for (int i = 0; i < n; i++)
   {
    cout<<a[i]<<endl;
   }
   
}

int main(){
   int arr[] = {1, 2, 2, 3, 40};
  int n = sizeof(arr)/sizeof(arr[0]);
  display(arr, n);
  
}

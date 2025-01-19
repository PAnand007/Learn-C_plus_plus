#include<iostream>
using namespace std;
int main(){
    //array
    int arr[5];
    cout<<"Enter 5 elements:";
    
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    //max 
    int max = arr[0];
    for (int j = 0; j < 5; j++)
    {
       if (arr[j] > max)
       {
        max = arr[j];
       }
    }

     //2nd max
    int max2 = arr[0];
    for (int j = 0; j < 5; j++)
    {
       if (arr[j] > max2 && arr[j] != max)
       {
        max2 = arr[j];
       }
    }
   

}

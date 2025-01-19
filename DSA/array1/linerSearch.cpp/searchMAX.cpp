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
   cout<<"MAX"<<max<<endl;
    
     //min
    int min = arr[0];
    for (int j = 0; j < 5; j++)
    {
       if (arr[j] < min)
       {
        min = arr[j];
       }
    }
   cout<<"MIN"<<min;
    
  


}

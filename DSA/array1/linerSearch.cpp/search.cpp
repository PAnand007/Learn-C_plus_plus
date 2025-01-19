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
    
    int x;
    cout<<"Enter the digit to search: "<<endl;
    cin>>x;


    //search
    //check mark bool
    bool flag = false;
    for (int j = 0; j < 5; j++)
    {
       if (arr[j] == x)
       {
        flag = true;
    //    cout<<"Digit is persent "<<arr[j]<<" Here" <<j<<endl;
       }   
    }
    //check marks
    if (flag == true)
    {
        cout<<"Element Persent ";
    }
    else{
        cout<<"Element Not Persent ";
    }
    
    
    
  


}

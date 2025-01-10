#include<iostream>
using namespace std;
int main() {
    //print reverse number
     int num;
    int last = 0;
    int reverse = 0;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    while (num> 0)
    {
        reverse=reverse*10;
        last=num%10;
        reverse+=last;
        num/=10;      
    }
    cout<<reverse<<endl;
    






    // int num;
    // int last = 0;
    // int sum = 0;
    // cout<<"Enter the number : "<<endl;
    // cin>>num;
    // while (num> 0)
    // {
    //     last=num%10;

    //     sum=sum+last;

    //     num/=10;      
    // }
    // cout<<sum<<endl;





    // int num;
    // int count =0;
    // cout<<"Enter the number : "<<endl;
    // cin>>num;
    // int a=num;
    // while (num>0)
    // {
    //     num/=10;
    //     count++;
    // }
    // if (a==0)
    // {
    //   cout<<'1'<<endl;
    // }
    // else
    // cout<<count;
    
    
}
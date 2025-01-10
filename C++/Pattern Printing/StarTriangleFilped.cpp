#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter number of rows : ";
    cin>>row;
   //
    
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1;j<=row+1-i ; j++)
    //     {
    //         cout<<" ";
           
    //     }
    //     for (int k = 1; k<=i ; k++)
    //     {
    //         cout<<"+";
           
    //     }
    //     cout<<endl;
    // }    


    for (int i = 0; i <=row; i++)
    {
       for (int j = 0; j <=row; j++)
       {
       if ((i+j)>=row+1)
       {
        cout<<"*";
       }
       else cout<<" ";
       
       }
       cout<<endl;
       
    }
    
}
#include<iostream>
using namespace std;
int main(){
    //i = 1 to n and
    //j = 1 to i then triangle shape

    int row, col;
    cout<<"Enter number of rows : ";
    cin>>row;
   
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1;j<=row+1-i ; j++)
        {
            cout<<" ";
           
        }
        for (int k = 1; k<=i ; k++)
        {
            cout<<k;
           
        }
        cout<<endl;
    }    

}
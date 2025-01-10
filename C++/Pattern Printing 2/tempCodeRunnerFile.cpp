#include<iostream>
using namespace std;
int main(){
    //i = 1 to n and
    //j = 1 to i then triangle shape formed

    int row, col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
   
    
    for (int i = 1; i <= row; i++ )
    {
        for (int j =1; j<=row-i ; j++) // j<=row+1-i 

        {
            cout<<" ";
           
        }
        for (int k = 1; k <=row ; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;          
    }    

}
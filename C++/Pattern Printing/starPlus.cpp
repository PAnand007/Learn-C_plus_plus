#include<iostream>
using namespace std;
int main(){
    //i = 1 to n and
    //j = 1 to i then triangle shape

    int row, col;
    cout<<"Enter number of rows (odd) : "<<endl;
    cin>>row;
    int mid = row/2+1;
   
    
    for (int i = 1; i <= row; i++)
    {
       
        for (int j = 1; j <= row; j++) 

        {
            //star cross
            if (i==j||i+j==row+1)
            {
                cout<<"*";
            }
            
            else{
                cout<<" ";
            }


            // if (i==mid||j==mid)
            // {
            //     cout<<"*";
            // }
            // else {
            //     cout<<" ";
            // }
        }
        cout<<endl;
    }    

}
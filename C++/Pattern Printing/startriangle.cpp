#include<iostream>
using namespace std;
int main(){
    //i = 1 to n and
    //j = 1 to i then triangle shape

    int row, col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
   
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++) //i can also be used but it's not good

        {
            cout<<"*";//add j here for number for d
           
        }
        cout<<endl;
    }    

}
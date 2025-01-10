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
        int a =1; 
        for (int j = 1; j <= i; j++) //j <= 2*i+1; j+=2 can also be used but it's not good enough

        {
            cout<<a;//add j here for number for d
            a+=2;
           
        }
        cout<<endl;
    }    

}
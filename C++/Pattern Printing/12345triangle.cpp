#include<iostream>
using namespace std;
int main(){
    //floyed triangle

    int row, col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    int k=1;
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++) 

        {
            cout<<k<<" ";
            k++;
           
        }
        cout<<endl;
    }    

}
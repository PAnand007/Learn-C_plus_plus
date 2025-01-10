// ****
// ****
// ****
// ****
//getung row and column from user rectangle
#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    cout<<"Enter number of column : "<<endl;
    cin>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++) //i can also be used but it's not good

        {
            cout<<"*";
            
        }
        cout<<endl;
    }    

}
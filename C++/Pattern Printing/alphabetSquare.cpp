// ****
// ****
// ****
// ****
//getung row and column from user rectangle
#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter number of rows <27 : "<<endl;
    cin>>row;
    cout<<"Enter number of column <27 : "<<endl;
    cin>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++) //i can also be used but it's not good

        {
            cout<< (char)(j+64)<<" ";
            cout<< (char)(j+96)<<" ";
            
        }
        cout<<endl;
    }    

}
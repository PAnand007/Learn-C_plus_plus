#include<iostream>
using namespace std;
int main(){
    //i = 1 to n and
    //j = 1 to i then triangle shape formed

    int row;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    int nst = 1; //no of stars
    int nsp = row-1; //no of spaces
   
    
    for (int i = 1; i <= row; i++ )
    {   //spaces
    for (int j = 1; j <=nsp; j++){
        cout<<" ";
      }
      nsp--;
    {
      for (int k = 1; k <=nst; k++)
      
      cout<<"*";
    }
    nst+=2;
    cout<<endl;
    
    }    

}
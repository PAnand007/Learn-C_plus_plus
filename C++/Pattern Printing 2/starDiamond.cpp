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
   
    
    for (int i = 1; i <= 2*row-1; i++ )
    {   //spaces
    for (int j = 1; j <=nsp; j++){
        cout<<" ";
      }
      if (i<=row-1)
      {
        nsp--;
      }
      else{
        nsp++;
      }
      
      
    {
      for (int k = 1; k <=nst; k++)
      
      cout<<"*";
    }
    if (i<=row-1)
    {
      nst+=2;
    }
    else {
    nst-=2;
    }
    
    cout<<endl;
    
    }    

}
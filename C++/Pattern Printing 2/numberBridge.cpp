#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows : "<<endl;
    cin>>n;
    m = n-1;
    int nsp = 1;
    //top star
    for (int i = 1; i <= 2*n-1; i++)
    {
       cout<<i;
    }
    cout<<endl;
    
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        //star
        for (int j = 1; j <= m+1-i; j++)
        {
            cout<<a;
            
            a++;
        }
        
        //spaces
        for (int k = 1; k<=nsp ; k++)
        {
            cout<<" ";
            a++;
        }
        nsp+=2;

        //stars
        for (int j = 1; j <= m+1-i; j++)
        {
            cout<<a;
            a++;
        }
        
        cout<<endl;   
    }
}
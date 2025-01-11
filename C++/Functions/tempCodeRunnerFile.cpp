#include<iostream>
#include<cmath> //header file for other funtions
using namespace std;



int main(){ 
    int n,r;
    cout<<"Enter n :"<<endl;
    cin>>n;
    cout<<"Enter r :"<<endl;
    cin>>r;
    int nfact =1;
    for (int i =  2; i <= n; i++) {
    {
        nfact *= i;
    }
    cout<<nfact;
    
}}
//find factorial
#include<iostream>
using namespace std;
int main() {
    int n, i, fact = 1;
    cout<<"enter the num : "<<endl;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        fact*=i;
        cout<<i<<"! = "<<fact<<endl;
    }
   
    
}
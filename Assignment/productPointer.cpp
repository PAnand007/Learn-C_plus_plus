#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *x = &a;
    int *y = &b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"The Product of a and b is "<<(*x)*(*y)<<endl;


}

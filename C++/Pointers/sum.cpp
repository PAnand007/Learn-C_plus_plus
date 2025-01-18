#include<iostream>
using namespace std;
int main(){
    //using pointers
    int  x, y ;
    int* p = &x;
    int* q = &y; 
    // int* p,q; here is p is int pointer and q is veriable 
    //no int* p = &x, q = &y; its wrong 
    cout << "Enter 1st Number: " << endl;
    cin>>*p;
    cout << "Enter 2nd Number: " << endl;
    cin>>*q;
    cout<<"Sum: "<< *p + *q <<endl;

}

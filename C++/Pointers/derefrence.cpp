#include<iostream>
using namespace std;
int main(){
    int  x = 4;
    int* p = &x; 
    x= 6;
    
    cout<<p<<endl;
    cout<<*p<<endl;// means the value that stored here goes to that adress and see things stored in that address
    *p = 9;
    cout<<p<<endl;
    cout<<*p<<endl;

}

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the 1st number : "<<endl;
    cin>>a;
    cout<<"Enter the 2nd number : "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operator (+,-,*,/): "<<endl;
    cin>>op;
    // using with switch operator

    switch (op)
    {
    case '+' :
        cout<<"add :"<<a+b<<endl;
        break;
    case '-' :
        cout<<"sub :"<<a-b<<endl;
        break;    
    case '*' :
        cout<<"mul :"<<a*b<<endl;
        break;
    case '/' :
        cout<<"div :"<<a/b<<endl;
        break;
    
    default:
        break;
    }



    // //using if else statement

    // if (op == '+') {
    //     cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    // }
    // else if (op =='-')
    // {
    //     cout<<"Substraction of "<<a<< " and "<<b<<" is "<<a-b<<endl;
    // }
    // else if (op == '*')
    // {
    //     cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    //     }
    // else if (op =='/'){
    //     cout<<"division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    // }
    
}
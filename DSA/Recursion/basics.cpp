#include<iostream>

using namespace std;

void fun(int n){ 
    if (n == 0) return;
    cout<<"hello"<<endl;
    fun(n-1);
}
int main(){
    //what = loop ki replacement  if problem = something + subproblem function call itself
    cout<<"Enter Number of times to print"<<endl;
    int n;
    cin>>n;
    fun(n);
    return 0;
}
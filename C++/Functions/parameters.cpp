#include<iostream>
using namespace std;
int fun(int x, int y)//formal parameters 
    {
        cout<<"function:" << &x<<endl<<&y;  
    }
int main(){
     int x = 3;
     int y;
     cout <<"Main:"<< &x<<endl<<&y;
     fun(x,y);//actual parameters
}
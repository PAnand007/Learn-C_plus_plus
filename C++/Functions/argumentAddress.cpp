#include<iostream>
using namespace std;
int fun(int x, int y)
    {
        cout<<"function:" << &x<<endl<<&y;  
    }
int main(){
     int x = 3;
     int y;
     cout <<"Main:"<< &x<<endl<<&y;
     fun(x,y);
}
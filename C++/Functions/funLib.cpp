#include<iostream>
#include<cmath> //header file for other funtions
using namespace std;

int mini(int x, int y){
    return x<y ? x : y;

}
int main(){ 
    int x,y;
    cout<<"Enter 1st Number :"<<endl;
    cin>>x;
    cout<<"Enter 2nd Number :"<<endl;cin>>y;
    cout<<"minimun value is :"<<mini(x,y)<<endl;
    cout<<"maximum value is :"<<max(x,y)<<endl;//buit in funtion max and min for maximum and minimum
    cout<<"minimun value is :"<<min(x,y)<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<sqrt(900);
}
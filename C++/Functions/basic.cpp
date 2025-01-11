// y =f(x) = x3 +3
// in project we always tends to use same /similar piece of code in the project multiple times , but not always continious repetation.

#include<iostream>
using namespace std;
// making function <void/int/float....> function_name(int a; int b; int c;//arguments ){ //function body }
// void greet(){ 
//     cout<<"good mornig"<<endl;
//     cout<<"have a nice day"<<endl;
// }
void star_triangle(int n){
    for(int i=1;i<=n;i++){
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;        
}
}
int main(){ //sabse pahle yahi chalta hai ek run me int main reserved , it
    // greet();
    // calling functions
    star_triangle(5);
    cout<<"hello World"<<endl;
    star_triangle(6);
    star_triangle(7);
    
}
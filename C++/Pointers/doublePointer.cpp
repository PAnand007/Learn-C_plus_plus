#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int *ptr = &n;
    int **ptr1 = &ptr;
    cout<<n<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr1<<endl;
}
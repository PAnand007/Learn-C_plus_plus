#include<iostream>
using namespace std;
int main(){
    int  x = 4;
    int* p = &x; //pointer why allocation by * (derefrence) and &
    cout << "The address of x is: " << p << endl;
    cout << " The adress p: " <<&p <<" for x "<<&x<<endl;
}

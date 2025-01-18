#include<iostream>
using namespace std;

void swap(int &x, int &y){ //pass  by refernce
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    
    swap(a,b);
    cout << "Swapped values: " << a << " " << b << endl;
    return 0;
}

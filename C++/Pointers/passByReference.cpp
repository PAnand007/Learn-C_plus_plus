#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    // int *x = &a;
    // int *y = &b;
    // swap(x,y);
    swap(&a, &b);
    cout << "Swapped values: " << a << " " << b << endl;
    return 0;
}

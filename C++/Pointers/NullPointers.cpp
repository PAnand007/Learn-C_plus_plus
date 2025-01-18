#include<iostream>
using namespace std;
int main() {
    int *ptr = NULL; //'\0' = NULL = 0 it is character 0
    int *ptr1 = 0;
    int *ptr2 = '\0';
    cout << "Value of ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value of ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << "Address of ptr2: " << &ptr2 << endl;


}
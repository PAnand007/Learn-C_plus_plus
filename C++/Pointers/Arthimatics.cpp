#include<iostream>
using namespace std;
int main() {
    int x = 7;
    int *ptr = &x;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl; //here address  got up  

    
     ptr--;
    cout<<ptr<<endl;


    // *ptr = *ptr +1;
    // (*ptr)++; //dont *ptr++;

    cout<<*ptr<<endl;//alotting anythings


    int y = 6;
    cout<<y<<" "<<&y<<endl;
    y++;
    cout<<y<<" "<<&y<<endl;
    //hexadecimal 0123456789abcdef so there address got up by 4 bytes 

    //     Output :
    //     0x61ff08
    // 0x61ff0c
    // 6 0x61ff04
    // 7 0x61ff04


}
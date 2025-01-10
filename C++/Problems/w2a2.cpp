#include<iostream>
using namespace std;

int main(){
    int n1, n2, n5, n10, n20, n50, n100, n500, amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    
    n500 = amount / 500;
    amount %= 500;
    n100 = amount / 100;
    amount %= 100;
    n50 = amount / 50;
    amount %= 50;
    n20 = amount / 20;
    amount %= 20;
    n10 = amount / 10;
    amount %= 10;
    n5 = amount / 5;
    amount %= 5;
    n2 = amount / 2;
    amount %= 2;
    n1 = amount;

    switch (1) {
        case 1:
            cout<<"500 : "<<n500<<endl;
        case 2:
            cout<<"100 : "<<n100<<endl;
        case 3:
            cout<<"50 : "<<n50<<endl;
        case 4:
            cout<<"20 : "<<n20<<endl;
        case 5:
            cout<<"10 : "<<n10<<endl;
        case 6:
            cout<<"5 : "<<n5<<endl;
        case 7:
            cout<<"2 : "<<n2<<endl;
        case 8:
            cout<<"1 : "<<n1<<endl;
            break;
        default:
            cout<<"Invalid amount"<<endl;
    }

    return 0;
}

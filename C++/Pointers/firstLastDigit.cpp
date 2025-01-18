#include<iostream>
using namespace std;
void find (int n, int *ptr1, int *ptr2){
    *ptr2 = n%10;
    while (n>9)
    {
        n/=10;
    }
    *ptr1 = n;
    return;


}
int main(){

    int n;
    cin>>n;
     int firstDigit, lastDigit;
     int *ptr1 = &firstDigit;
     int *ptr2 = &lastDigit;
     find(n, ptr1, ptr2);
     cout<<firstDigit<<" "<<lastDigit<<endl;

    // int n;
    // cin >> n;
    // int l = n % 10;
    // while (n>10)
    // {
    //     n = n / 10;
    // }
    // cout<<"Last : "<<l<<" First : "<<n<<endl;


}
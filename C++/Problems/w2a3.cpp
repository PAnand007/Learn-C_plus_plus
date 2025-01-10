#include<iostream>
using namespace std;

int main(){
    //TABLE FOR ANY NUMBER
    // int n;
    // cout << "Enter the number for the table: " << endl;
    // cin >> n;

    // for (int i = 1; i <= 10; i++) {
    //     cout << n << " x " << i << " = " << n * i << endl;
    // }

    // return 0;

    //AP 4,7,10,13....upto n terms
    // int n;
    // cout << "Enter the number of terms: " << endl;
    // cin >> n;
    // int a = 4, d = 3;
    // for (int i = 1; i <= n; i++) {
    //     cout << a << " ";
    //     a = a + d;
    //     }

// //Gp 3,12,48,......
//     int n;
//     cout<<"enter the number of terms : "<<endl;
//     cin>>n;
//     int a = 3, r = 4;
//     for (int i = 1; i<=10; i++){
//         cout<<a<<" ";
//         a = a*r;
//     }

    // //To print ascii value and crosponding character when i know value of ascii of A and Z
    // int i;
    // for ( i = 65; i <= 90; i++)
    // {
    //     cout<<i<<" = "<<(char) i<<" ";
    // }
    

    //  //To print ascii value and crosponding character when i don't know value of ascii of A and Z
    // char ch;
    // for ( ch = 'A'; ch <= 'Z'; ch++)
    // {
    //     cout<<ch<<" = "<<(int) ch<<" ";
    // }
    
    //to find ascii value of any charecter
    char choice;
    do {
    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;
    cout<<"The ASCII value of "<<ch<<" is "<<(int)ch<<endl;

    cout << "Do you want to enter another number? (y/n): ";
    cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

return 0;

}

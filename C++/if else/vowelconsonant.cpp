#include<iostream>
using namespace std;
int main(){
    //triangle problem
    int a, b, c;
    cout<<"enter the first side ";
    cin>>a;
    cout<<"enter the second side ";
    cin>>b;
    cout<<"enter the third side ";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a)
    cout<<"it is a triangle";
    else
    cout<<"it is not a triangle";

    


    // char ch;
    // cout<<"Enter a character: ";
    // cin>>ch;
    // int ascii = (int)ch;
    // if (ascii>=97 && ascii<=122 )
    // {
    //     cout<<ch;
    // }
    // else if (ascii>=65 && ascii<=90)
    // {
    //     ch=(int)ch + 32;
    //     cout<<ch;
    // }
    


    
    // //check its is vowel or consonant
    // if ((ascii>=97 && ascii<=122 ) || (ascii>=65 && ascii<=90) )
    // {
    //     if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    //     {
    //        cout<<"its vowel "<<ch;
    //     }
    //     else{
    //         cout << "its consonant "<<ch;
    //     }
        
    // }
    // else {
    //     cout<<"its not a alphabet "<<ch;
    // }
    




}
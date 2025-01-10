#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int ascii = (int)ch;
    if (ascii>=97 && ascii<=122 )
    {
        cout<<ch;
    }
    else if (ascii>=65 && ascii<=90)
    {
        ch=(int)ch + 35;
        cout<<ch;
    }
    


    
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
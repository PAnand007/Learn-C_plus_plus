#include<iostream>

using namespace std;

int main(){
    // char str[] = {'a','b','c','d','e','f','g','h'}; //computer add '\0' i.e null character

    // char str[] = "abcd ef";
    // for (int i = 0; i < sizeof(str); i++)
    // {
    //     cout<<str[i]<<" ";
    // }

    // char ch = '\n';
    // cout<<ch<<endl;

    // char ch = '\0';
    // cout<<ch<<endl;
    // cout<<(int)ch<<endl;

    char str[] = {'a','b','c','d','e','f','g','h'}; 
    for (int i = 0; str[i]!='\0'; i++)
    {
        cout<<str[i]<<" ";
    }

    char str1[] = {'a','b','c','\0','e','f','g','h'}; 
    cout<<str1;

    

    return 0;
}
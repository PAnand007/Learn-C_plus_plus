#include<iostream>
#include<string>

using namespace std;

int main(){
    // string str = "hello";
    // cout << str << endl;

    string s;
    // cin>>s; //only take input without spaces   so we use get line 
    getline(cin,s);
    
    cout<<s<<endl;

    // string str = "he llo";
    // cout << str << endl;

    return 0;
}
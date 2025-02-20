#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main(){
    string str = "Hello, World!"; 
    cout << str << endl;
    //LENGTH SIZE
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // cout<<sizeof(str);

    //PUSH BACK POP BACK
    // str.push_back('!');
    // str.pop_back();
    // str.push_back('7');

    string s = "ABCDEF";
    string s1 = " world";
    // s = s + s1 ;
    
    // cout << s << endl;

    // str = s + "Hi!";
    // cout << str << endl;

    cout << s << endl;
    int n = s.length();
    reverse(s.begin(),s.end()+(n/2));
    cout << s << endl;




    return 0;
}
#include<iostream>
#include<string>

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

    string s = "hello";
    string s1 = " world";
    s = s + s1 ;
    
    cout << s << endl;

    str = s + "Hi!";
    cout << str << endl;


    return 0;
}
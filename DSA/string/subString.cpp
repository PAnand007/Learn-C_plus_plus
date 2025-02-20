#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    // string str = "Hello World!";
    // cout << str.substr(2,5) << endl; //ubstr(2 from,5 length) 

        string s;
        cout << "Enter a string: ";
        getline(cin,s);
        cout << "You entered: " << s << endl;
        int n = s.length();
        cout << "Sub String: "<<s.substr(n/2) << endl;

    return 0;
}
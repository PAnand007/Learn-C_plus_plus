#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "You entered: " << s << endl;
    int n = s.length();
    sort(s.begin(),s.end()); //ascii values ke order me sort hota hai
    cout << "Sorted string: " << s << endl;
    return 0;
}

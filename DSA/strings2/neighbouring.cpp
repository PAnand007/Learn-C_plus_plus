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
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    count++; // To account for the last character
    cout << "Number of consecutive repeated characters: " << count << endl;
    
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s, int i, int j) {
    if (i >= j) return true; // Base condition
    if (s[i] != s[j]) return false;
    return isPalindrome(s, i + 1, j - 1);
}

int main() {
    string s = "hoopooh";
    if (isPalindrome(s, 0, s.length() - 1)) {
        cout << s << " is a palindrome." << endl;
    } else {
        cout << s << " is not a palindrome." << endl;
    }

    return 0;
}

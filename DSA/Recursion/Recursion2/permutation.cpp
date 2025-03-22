#include <iostream>
#include <vector>
#include <string>

using namespace std;

void permutation(string ans, string original) {
    if (original.empty()) {  // Base case: When no characters are left
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < original.length(); i++) {
        char ch = original[i];
        string rest = original.substr(0, i) + original.substr(i + 1);  // Remove the character
        permutation(ans + ch, rest);  // Recur with the remaining string
    }
}

int main() {
    string str = "abc";
    permutation("", str);
    return 0;
}

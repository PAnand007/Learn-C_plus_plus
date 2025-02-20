#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    getline(cin, s);

    vector<int> freq(26, 0); 
    for (char c : s) {
        freq[c - 'a']++;
    }

    char maxChar = 'a';
    int maxFreq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i + 'a';
        }
    }

    cout << "Highest frequency character: " << maxChar << " (Frequency: " << maxFreq << ")" << endl;

    return 0;
}

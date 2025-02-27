#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    getline(cin, s);

    vector<int> freq(52, 0);  
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (isalpha(ch)) {  
            if (islower(ch)) {
                freq[ch - 'a']++;
            } else {
                freq[ch - 'A' + 26]++;
            }
        }
    }

    int max = 0;
    int max_index = -1;
    for (int i = 0; i < 52; i++)
    {
        if (freq[i] > max) 
        {
            max = freq[i];
            max_index = i;
        }
    }

    if (max_index != -1)
    {
        char max_char = (max_index < 26) ? (max_index + 'a') : (max_index - 26 + 'A');
        cout << "Most frequent character: " << max_char << " with frequency " << max << endl;
    }
    else
    {
        cout << "No alphabetic characters found." << endl;
    }

    return 0;
}

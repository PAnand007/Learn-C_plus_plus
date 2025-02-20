//if charactersARE rearangred to form another word
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s,t;
    cout << "Enter 1st word: ";
    getline(cin, s);
    cout << "Enter 2nd word: ";
    getline(cin, t);
    cout << "You entered: " << s << " & " << t << endl;


   

    sort(s.begin(),s.end()); 
    sort(t.begin(),t.end());
    if (s == t) cout<<"It's anagram"<<endl; 
    else cout<<"It's not an anagram"<<endl;
    
    
    return 0;
}

// class Solution {
//     public:
//         bool isAnagram(string s, string t) {
//             if (s.length() != t.length()) {
//                 return false; 
//             }
     
//             int freq[26] = {0};     
//             for (int i = 0; i < s.length(); i++) {
//                 freq[s[i] - 'a']++;  
//                 freq[t[i] - 'a']--; 
//             }
          
//             for (int i = 0; i < 26; i++) {
//                 if (freq[i] != 0) {
//                     return false;
//                 }
//             }
            
//             return true;
//         }
//     };
    
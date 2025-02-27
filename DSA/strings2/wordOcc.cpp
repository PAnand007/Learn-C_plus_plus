#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {
    string str = "Hello, How are you? What are you doing? ";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp) {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    // Using unordered_map to count the occurrences of each word
    unordered_map<string, int> wordCount;
    for (const auto& word : v) {
        wordCount[word]++;
    }

    int maxCount = 0;
    string mostFrequentWord;

    for (const auto& pair : wordCount) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentWord = pair.first;
        }
    }

    cout << "Sorted words:" << endl;
    for (const auto& word : v) {
        cout << word << endl;
    }

    cout << "\nMost frequent word: " << mostFrequentWord << " (appears " << maxCount << " times)" << endl;

    return 0;
}

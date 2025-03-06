#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, p;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "You entered: " << s << endl;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] < 'p') {
            p.push_back(s[i]);
        }
    }

    // Bubble sort algorithm
    int np = p.length();
    for (int i = 0; i < np - 1; i++) {
        bool flag = true;
        for (int j = 0; j < np - i - 1; j++) {
            if (p[j] > p[j + 1]) {
                swap(p[j], p[j + 1]);
                flag = false;
            }
        }
        if (flag) break;
    }

    cout << "Sorted string: " << p << endl;
    return 0;
}

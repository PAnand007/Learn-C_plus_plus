#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    getline(cin, s);

    stringstream ss (s);
    string temp;
    while (ss>>temp)
    {
       sort(temp.begin(),temp.end());
       cout << temp << " ";
    }
    
   

    return 0;
}

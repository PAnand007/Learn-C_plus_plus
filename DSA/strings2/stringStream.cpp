#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

int main() {
    string str = "Hello, How are            you? what are you doing? ";
    stringstream ss(str);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
    

    
    return 0;
}

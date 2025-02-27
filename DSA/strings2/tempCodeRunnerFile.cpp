#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    string str = "123456";
    int x = stoi(str);
    cout << x << endl;
    string p = to_string(x);
    cout << p << endl;

   
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "hello";
    cout << str << endl;

    int count = 0;
 

    // for (int i = 0; i < str.length(); i++) {
    //     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
    //         count++;
    //     }
    // }

    // Loop until end of string   
    int  i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
        i++;
    }
    

    cout << count << endl;

    return 0;
}

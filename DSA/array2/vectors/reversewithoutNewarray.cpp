#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void display(const vector<int>& v){
     // Printing the array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {4, 5, 3, 1, 2, 6, 7, 8, 9, 5};
    int x = v.size();
    
    for (int i = 0; i < x / 2; i++) {
        swap(v[i], v[x - i - 1]);
    }
    
    display(v);

    reverse(v.begin(),v.end());
    display(v);

    return 0;
}



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {4, 5, 3, 1, 2, 6, 7, 8, 9, 5};
//     int x = v.size();
    
//     for (int i = 0; i < x / 2; i++) {
//         int temp = v[i];
//         v[i] = v[x - i - 1];
//         v[x - i - 1] = temp;
//     }
    
//     // Printing the reversed array
//     for (int i = 0; i < x; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

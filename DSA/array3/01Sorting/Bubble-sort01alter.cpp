#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    vector<int> v = {0, 0, 1, 0, 0, 1, 1, 1};
    display(v);

    int s = v.size();
  
    for (int i = 0; i < s - 1; i++) {
        
        for (int j = 0; j < s - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
               
            }
        }
       
    }

    display(v);
    return 0;
}

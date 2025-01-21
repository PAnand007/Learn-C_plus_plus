#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void sort(vector<int>& v) {
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j) {
        while (i < j && v[i] == 0) {
            i++;
        } 
        while (i < j && v[j] == 1) {
            j--;
        }
        if (i < j) {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v = {0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    display(v);
    sort(v);
    display(v);
    return 0;
}

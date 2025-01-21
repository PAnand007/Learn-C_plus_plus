#include <iostream>
#include <vector>
using namespace std;
//bubbble sort
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

void sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (v[j - 1] > v[j]) {
                swap(v[j - 1], v[j]);
            }
        }
    }
}

int main() {
    vector<int> v = {-4, 5, -8, -2, 3, -1, -5, 4, -9, -7, 2, 2, -4, 8, 7, 9, -5};
    display(v);
    sort(v);
    display(v);
    return 0;
}

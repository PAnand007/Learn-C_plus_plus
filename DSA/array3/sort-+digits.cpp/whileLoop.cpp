#include <iostream>
#include <vector>
using namespace std;
//while loop sort
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
    int i = 0, j = n - 1;
    while (i < j) {
        while (i < j && v[i] < 0) i++;
        while (i < j && v[j] > 0) j--;
        if (i < j) {
            swap(v[i], v[j]);
            i++;
            j--;
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

#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    display(v);

    int noz = 0, noo = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) {
            noz++;
        } else {
            noo++;
        }
    }
    for (int i = 0; i < v.size(); i++) {
        if (i<noz)
        {
            v[i] = 0;
        }
        else v[i] = 1;
        
        // v[i] = 0;
    }

    // for (int i = noz; i < v.size(); i++) {
    //     v[i] = 1;
    // }

    display(v);
    return 0;
}

// copy the content of one array into another array in reverse order
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {4, 5, 3, 1, 2, 6, 7, 8, 9, 5};
    int x = v.size();
    vector<int> rev(x);

    for(int i = 0; i < x; i++){
        rev[i] = v[x - i - 1];
    }

    for(int i = 0; i < x; i++){
        cout << rev[i] << " ";
    }

    return 0;
}

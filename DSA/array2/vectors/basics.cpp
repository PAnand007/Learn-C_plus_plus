#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4] = {1, 2, 5, 4};  // Fixed size array
    vector<int> vec;  // Dynamic array using vector

    // Output the fixed array elements
    cout << "Array elements: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Adding elements to the vector
    vec.push_back(6);
    vec.push_back(7);

    // Output the vector elements
    cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

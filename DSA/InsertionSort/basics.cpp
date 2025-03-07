#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int arr[] = {4, 5, 4, 6, 3, 58, 3, 1, 0, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Before Sorting:" << endl;
    for (int ele : arr) {
        cout << ele << " ";
    }
    //Inserion Sort
    
    cout << endl << "After Sorting:" << endl;
    for (int ele : arr) {
        cout << ele << " ";
    }

    return 0;
}

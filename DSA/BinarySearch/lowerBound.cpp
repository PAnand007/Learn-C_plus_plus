#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {4, 6, 9, 4, 1, 2, 3};
    sort(v.begin(), v.end()); // Sorting is required for binary search
    int n = v.size();
    
    int find;
    cout << "Enter the number to be searched: ";
    cin >> find;

    int low = 0, high = n - 1;
    bool found = false;
    int lower_bound_index = n; // Default value if not found

    while (low <= high) { // FIXED: Use <= instead of <
        int mid = low + (high - low) / 2;

        if (v[mid] == find) {
            cout << find << " is present at index " << mid << endl;
            found = true;
            break;
        } else if (v[mid] < find) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Lower Bound Binary Search
    low = 0, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (v[mid] >= find) {
            lower_bound_index = mid;
            high = mid; // Move left
        } else {
            low = mid + 1; // Move right
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }
    cout << "Lower Bound Index: " << lower_bound_index << endl;

    return 0;
}

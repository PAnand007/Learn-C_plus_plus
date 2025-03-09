#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {4, 6, 9, 4, 1, 2, 3};
    sort(v.begin(), v.end());
    int n = v.size();
    
    int find;
    cout << "Enter the number to be searched: ";
    cin >> find;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == find) {
            cout <<find<< "  Element is present " << endl;
            found = true;
            break;
        } else if (v[mid] < find) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}












// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> v = {4, 6, 9, 4, 1, 2, 3};
//     sort(v.begin(), v.end());
//     int n = v.size();
    
//     int find;
//     cout << "Enter the number to be searched: ";
//     cin >> find;

//     int low = 0;
//     int high = n - 1;
//     bool found = false;

//     for (int mid = (low + high) / 2; low <= high; mid = (low + high) / 2) {
//         if (v[mid] == find) {
//             cout << "Element is present at index " << mid << endl;
//             found = true;
//             break;
//         } else if (v[mid] < find) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     if (!found) {
//         cout << "Element not found." << endl;
//     }

//     return 0;
// }

//leet code

// class Solution {
//     public:
//         int search(vector<int>& nums, int target) {
//             int low = 0;
//             int high = nums.size() - 1;
    
//             while (low <= high) {
//                 int mid = low + (high - low) / 2; // this reduce long long
    
//                 if (nums[mid] == target) {
//                     return mid;
//                 } else if (nums[mid] < target) {
//                     low = mid + 1;
//                 } else {
//                     high = mid - 1;
//                 }
//             }
    
//             return -1;
//         }
//     };
    // Time complexity: O(log n)

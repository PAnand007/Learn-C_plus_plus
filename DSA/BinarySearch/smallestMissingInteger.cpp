#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {4, 6, 9, 4,0, 1, 2, 3};
    sort(v.begin(), v.end());
    int n = v.size();

    int low = 0;
    int high = n - 1;
    int ans = -1;


    while (low <= high) {
        int mid = low + (high - low) / 2;
        

        if (v[mid] == mid) {
            low = mid+1;
           
        } else {
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    result.push_back(current);

    for (int i = index; i < nums.size(); ++i) {
        // Skip duplicate elements
        if (i > index && nums[i] == nums[i - 1]) {
            continue;
        }

        current.push_back(nums[i]);
        findSubsets(i + 1, nums, current, result);
        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // Sort the array to handle duplicates
    vector<vector<int>> result;
    vector<int> current;
    findSubsets(0, nums, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2, 3}; 
    vector<vector<int>> result = subsetsWithDup(nums);

    cout << "Subsets:\n";
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}

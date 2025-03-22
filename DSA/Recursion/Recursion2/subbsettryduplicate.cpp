#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    result.push_back(current);  // Store the current subset

    for (int i = index; i < nums.size(); i++) {
        if (i > index && nums[i] == nums[i - 1]) continue;  // Skip duplicates

        current.push_back(nums[i]);  // Include element
        generate(i + 1, nums, current, result);
        current.pop_back();  // Backtrack
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // Sort to handle duplicates
    vector<vector<int>> result;
    vector<int> current;
    generate(0, nums, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};  // Example input
    vector<vector<int>> subsets = subsetsWithDup(nums);

    // Print all unique subsets
    cout << "Unique Subsets:\n";
    for (auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) cout << num << " ";
        cout << "}\n";
    }

    return 0;
}

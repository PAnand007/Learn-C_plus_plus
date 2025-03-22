#include <iostream>
#include <vector>

using namespace std;

void generateSequences(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == 3) {  // Store only subsets of size 3
        result.push_back(current);
        return;
    }
    if (index == nums.size()) return;  // Stop recursion if we reach the end

    // Include the current element
    current.push_back(nums[index]);
    generateSequences(index + 1, nums, current, result);
    current.pop_back();  // Backtrack

    // Exclude the current element
    generateSequences(index + 1, nums, current, result);
}

vector<vector<int>> subsetSequencesOfSize3(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    generateSequences(0, nums, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};  // Example input
    vector<vector<int>> subsets = subsetSequencesOfSize3(nums);

    // Print all subsets of size 3
    cout << "Subset Sequences of Size 3:\n";
    for (auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) cout << num << " ";
        cout << "}\n";
    }

    return 0;
}

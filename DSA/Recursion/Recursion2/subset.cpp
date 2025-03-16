// #include<iostream>

// using namespace std;

// int main(){

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> result = {{}};
//         for (int num : nums) {
//             int n = result.size();
//             for (int i = 0; i < n; i++) {
//                 vector<int> temp = result[i];
//                 temp.push_back(num);
//                 result.push_back(temp);
//             }
//         }
//         return result;
//     }

    

















//     class Solution {    
//         public:
//             void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& temp, int start) {
//                 result.push_back(temp); 
//                 for (int i = start; i < nums.size(); i++) {
//                     temp.push_back(nums[i]); 
//                     backtrack(nums, result, temp, i + 1); 
//                     temp.pop_back(); 
//                 }
//             }
        
//             vector<vector<int>> subsets(vector<int>& nums) {
//                 vector<vector<int>> result;
//                 vector<int> temp;
//                 backtrack(nums, result, temp, 0); 
//                 return result;
//             }
//         };
        

//     return 0;
// }
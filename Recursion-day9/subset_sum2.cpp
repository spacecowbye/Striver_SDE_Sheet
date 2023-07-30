// class Solution {
// public:
//     void recur(int index, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
//         ans.push_back(ds);
//         for (int i = index; i < nums.size(); i++) {
//             if (i != index && nums[i] == nums[i - 1])
//                 continue;
//             ds.push_back(nums[i]);
//             recur(i + 1, nums, ds, ans); // Note the change in the index here
//             ds.pop_back();
//         }
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> ds;
//         sort(nums.begin(), nums.end());
//         int index = 0;
//         recur(index, nums, ds, ans);
//         return ans;
//     }
// };

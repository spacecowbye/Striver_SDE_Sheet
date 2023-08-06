// #include <vector>

// class Solution {
// public:
//     void recur(int index, vector<int>& candidates, vector<int>& ans, vector<vector<int>>& res, int sum, int target) {
//         if (sum == target) {
//             res.push_back(ans);
//             return;
//         }

//         if (sum > target || index == candidates.size()) {
//             return;
//         }

//         // Include the current candidate in the combination
//         ans.push_back(candidates[index]);
//         recur(index, candidates, ans, res, sum + candidates[index], target);
//         ans.pop_back();

//         // Skip the current candidate and move to the next one
//         recur(index + 1, candidates, ans, res, sum, target);
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int> ans;
//         vector<vector<int>> res;
//         int index = 0;
//         recur(index, candidates, ans, res, 0, target);
//         return res;
//     }
// };

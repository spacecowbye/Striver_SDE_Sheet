//brute force solution

//better solution
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& arr, int target) {
//         set<vector<int>> ans;
//         int n= arr.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 set <long long> hashset;
//                 for(int k=j+1;k<n;k++){
//                     long long sum = arr[i]+arr[j];
//                     sum+=arr[k];
//                     if(hashset.find(target-sum)!=hashset.end()){
//                         vector<int> temp = {arr[i],arr[j],arr[k],int(target-sum)};
//                         ans.insert(temp);
//                     }
//                     hashset.insert(arr[k]);
//                 }
//             }
//         }
//         vector<vector<int>> ans1(ans.begin(),ans.end());
//         return ans1;
//     }
// };

//optimal solution
//  class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n = nums.size(); //size of the array
//     vector<vector<int>> ans;

//     // sort the given array:
//     sort(nums.begin(), nums.end());

//     //calculating the quadruplets:
//     for (int i = 0; i < n; i++) {
//         // avoid the duplicates while moving i:
//         if (i > 0 && nums[i] == nums[i - 1]) continue;
//         for (int j = i + 1; j < n; j++) {
//             // avoid the duplicates while moving j:
//             if (j > i + 1 && nums[j] == nums[j - 1]) continue;

//             // 2 pointers:
//             int k = j + 1;
//             int l = n - 1;
//             while (k < l) {
//                 long long sum = nums[i];
//                 sum += nums[j];
//                 sum += nums[k];
//                 sum += nums[l];
//                 if (sum == target) {
//                     vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
//                     ans.push_back(temp);
//                     k++; l--;

//                     //skip the duplicates:
//                     while (k < l && nums[k] == nums[k - 1]) k++;
//                     while (k < l && nums[l] == nums[l + 1]) l--;
//                 }
//                 else if (sum < target) k++;
//                 else l--;
//             }
//         }
//     }

//     return ans;
// }
    
// };
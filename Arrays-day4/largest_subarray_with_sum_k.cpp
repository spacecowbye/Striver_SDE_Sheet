//brute force solution
//generate all subarrays
// for(int i=0;i<n;i++){
    
//     for(int j=i+1;j<n;j++){
//        int sum = 0;
//        for(int k=i;k<j;k++){
//          sum+=arr[k];
//        }
//     }
// }
// tc = > o(n^3) somewhat
// sc => o(1) constant

//better solution for generating subarrays
//for(int i=0;i<n;i++){
//    int sum = 0;
//     for(int j=i+1;j<n;j++){
//        
//        
//          sum+=arr[j];
//        }
//     }
// }

//better solution using hashing
// class Solution {
// public:
//     int maxLen(vector<int>& arr, int n) {
//         unordered_map<long long, int> m;
//         int longest = 0;
//         long long sum = 0;

//         for (int i = 0; i < n; i++) {
//             sum += arr[i];

//             if (sum == 0) {
//                 longest = i + 1;
//             }

//             if (m.find(sum) != m.end()) {
//                 longest = max(longest, i - m[sum]);
//             } else {
//                 m[sum] = i;
//             }
//         }

//         return longest;
//     }
// };
//this is optimal if array has positives,negatives and 0s

 //but if array has only positives,then there exists a most optimal solution
//  int left = 0;
//  int right = 0;
//  long long sum = arr[0];
// int maxLen = 0;
// int n =arr.size();
// while(right<n){
//     while(left<=right &&sum>k){
//         sum-=arr[left];
//         left++;
//     }

//     if(sum==k){
//         maxLen = max(maxLen,right-left+1)
//     }
//     right++;
//     if(right<n)sum+=arr[right];

// }
// return maxLen
// tc=>worst case 2n
//sc =o(1)
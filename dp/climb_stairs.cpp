//brute force recursive way
// class Solution {
// public:
//     int index(int n){
//         if(n==0||n==1){
//             return 1;
//         }
        
//         int left = index(n-1);
//         int right = index(n-2);
//         return left+right;
//     }
//     int climbStairs(int n) {
//         vector<int> v(n+1,-1); 
//         int ans=index(n);
//         return ans;
//     }
// };

//memoization way
// class Solution {
// public:
//     int index(int n,vector<int> &dp){
//         if(n==0||n==1){
//             return 1;
//         }
//         if(dp[n]!=-1){
//             return dp[n];
//         }
//         int left = index(n-1,dp);
//         int right = index(n-2,dp);
//         return dp[n]=left+right;
//     }
//     int climbStairs(int n) {
//         vector<int> dp(n+1,-1);
//         int ans=index(n,dp);
//         return ans;
//     }
// };

//tabulation
// class Solution {
// public:
    
//     int climbStairs(int n) {
// vector<int> dp(n + 1, -1);
//         dp[0] = dp[1] = 1;

//         for (int i = 2; i <= n; i++) {
//             dp[i] = dp[i - 1] + dp[i - 2];
//         }

//         return dp[n];
//     }
// };

//space optimization
// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n == 0 || n == 1) {
//             return 1;
//         }
//         int prev = 1, curr = 1;
//         for (int i = 2; i <= n; i++) {
//             int temp = curr;
//             curr = prev + curr;
//             prev = temp;
//         }
//         return curr;
//     }
// };
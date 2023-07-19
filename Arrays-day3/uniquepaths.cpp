// BRUTE FORCE recursive approach
// class Solution {
// public:
//     int countPaths(int i,int j,int n,int m){
//         if(i==m-1&&j==n-1)return 1;
//         else if(i>=m||j>=n)return 0;
//         else{
//             return countPaths(i+1,j,n,m)+countPaths(i,j+1,n,m);
//         }
//     }
//     int uniquePaths(int m, int n) {
//         int r = countPaths(0,0,n,m);
//         return r;
//     }
// };

//better solution
// class Solution {
// public:
//     int countPaths(int i,int j,int n,int m,vector<vector<int>> &dp){
//         if(i==m-1&&j==n-1)return 1;
//         else if(i>=m||j>=n)return 0;
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         else{
//             return dp[i][j]=countPaths(i+1,j,n,m,dp)+countPaths(i,j+1,n,m,dp);
//         }
//     }
//     int uniquePaths(int m, int n) {
//         int initial_value = -1;

//     // Declare a vector of vectors and initialize with -1
//     vector<vector<int>> dp(m, vector<int>(n, initial_value));
//         int r = countPaths(0,0,n,m,dp);
//         return r;
//     }
// };

//optimal solution

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
//we can see it is a combinatorics problem
//to move right towards the target, there are fixed number of rights we have to make
//to move down towards the target, there are a fixed number of downs we have to make fixed number of turns
//answer = (m+n-2)C(m-1)
// class Solution {
// public:
    
//     int uniquePaths(int m, int n) {
//         int x = m+n-2;
//         int r = m-1;
//         long long  ans = 1;
//         for(int i=1;i<=r;i++){
//             ans = ans *(x-r+i)/i;
//         }
//         return int(ans);
//     }
// };
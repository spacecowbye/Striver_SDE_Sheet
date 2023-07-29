// class Solution {
// public:
//     void dfs(int node,vector<vector<int>> adj,vector<int> & visited){
//         visited[node]=1;
//         for(auto it : adj[node]){
//            if(!visited[it]){
//             dfs(it,adj,visited);
//            }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//        vector <vector<int>> adj(n+1);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]!=0&&i!=j){
//                     adj[i].push_back(j);
//                     adj[j].push_back(i);
//                 }
//             }
//         }
//         vector<int> visited(n+1,0);
//         int cnt = 0;
//         for(int i=0;i<n;i++){
//             if(!visited[i]){
//                 cnt++;
//                 dfs(i,adj,visited);
//             }
//         }
//         return cnt;
//     }
// };
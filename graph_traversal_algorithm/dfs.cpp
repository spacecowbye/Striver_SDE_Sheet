// lass Solution {
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     void dfs(int node,vector<int> adj[], vector<int> ls,int visited[]){
//         visited[node]=1;
//         ls.push_back(node);
//         for(auto it : adj[node]){
//             if(!visited[it]){
//                 dfs(it,adj,ls,visited);
//             }
//         }
//     }
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         int visited[V]={0};
//         int start = 0;
//         vector<int> ls;
//         dfs(0,adj,ls,visited);
//         return ls;
        
//     }
// };
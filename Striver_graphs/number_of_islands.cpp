// Find the number of islands
// https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find_the_number_of_islands
#include<iostream>
#include<vector>
#include<algorithm>
//#include<bit/stdc++.h>


class Solution {
  private:
    void bfs(int row,int col,vector<vector<char>>&grid,vector<vector<int>> &visited){
        visited[row][col] = 1;
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push(make_pair(row,col));
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            //traverse the neighbours
            
            for(int delrow = -1;delrow<=1;delrow++){
                for(int delcol = -1;delcol<=1;delcol++){
                    int nrow = i+delrow;
                    int ncol = j+delcol;
                     if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !visited[nrow][ncol] && grid[nrow][ncol] == '1') {
            visited[nrow][ncol] = 1;
            q.push(make_pair(nrow, ncol));
        }
                }
            }
            
        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j]&&grid[i][j]=='1') {
                    cnt++;
                    bfs(i,j,grid,visited);
                    
                }
            }
        }
        return cnt;
    }
};
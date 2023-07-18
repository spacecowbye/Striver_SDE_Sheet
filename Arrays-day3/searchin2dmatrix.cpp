// //better solution
// class Solution
// {
//     public:
//     //Function to search a given number in row-column sorted matrix.
//     bool search(vector<vector<int> > matrix, int n, int m, int x) 
//     {
//         int i = 0;
//         int j = m-1;
//         int pointer = matrix[0][m-1];
//         while(i <n && j>0 && j>=0 ){
//             if(matrix[i][j]==x){
//                 return true;
//             }
//             if(matrix[i][j]>x){
//                 j=j-1;
//             }
//             else{
//                 i=i+1;
//             }
//         }
//     return false;
//     }
// };

// //optimal solution
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         ios_base::sync_with_stdio(0);
//         cin.tie(nullptr);
//         if(matrix.size()==0){
//             return false;
//         }
//         int n = matrix.size();
//         int m = matrix[0].size();

//         int lo = 0;
//         int hi = n*m-1;
//         while(lo<=hi){
//             int mid = lo+(hi-lo)/2;
//             if(matrix[mid/m][mid%m]==target){
//                 return true;
//             }
//             if(matrix[mid/m][mid%m]<target){
//                 lo = mid +1;
//             }
//             else{
//                 hi = mid-1;
//             }
//         }
//     return false;
//     }

// };
// class Solution {
// public:
//     vector <int> generateRow(int n){
//         vector <int> v;
//         int ans = 1;
//         v.push_back(ans);
//         for(int i=1;i<n;i++){
//             ans = ans *(n-i);
//             ans = ans/i;
//             v.push_back(ans);
//         }
//         return v;
//     }
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int> > v;
//         for(int i=0;i<numRows;i++){
//             vector <int> temp = generateRow(i+1);
//             v.push_back(temp);
//         }
//         return v;
//     }

// };
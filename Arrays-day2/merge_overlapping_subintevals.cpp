


//OPTIMAL SOLUTION
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& arr) {
//        vector <vector<int>> merged;
//         if(arr.size()==0){
//             return merged;
//         } 
//         sort(arr.begin(),arr.end());
//         vector <int> temp = arr[0];
//         for(auto it : arr){
//             if(it[0]<=temp[1]){
//                 temp[1]=max(it[1],temp[1]);
//             }
//             else{
//                 merged.push_back(temp);
//                 temp = it;
//             }
        
//         }
//         merged.push_back(temp);
//         return merged;

      
// };
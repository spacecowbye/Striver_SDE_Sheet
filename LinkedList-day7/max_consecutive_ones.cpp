// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& arr) {
//         ios_base::sync_with_stdio(0);
//  cin.tie(nullptr);
//         int maxl = 0;
//         int ans=0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]==1){
//                 maxl=maxl+1;
//                 ans = max(ans,maxl);
//             }
//             else if(arr[i]==0)
//             {
               
//                 maxl=0;
//             }
//         }
//             return ans;
            
        
//             }
// };
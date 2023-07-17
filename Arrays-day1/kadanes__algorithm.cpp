// brute force solution is to generate all sub arrays
//arr = [1,2,3,4,5,7]
//       i   j
//for(int i=0;i<n;i++){
//     
//     for(int j=i+1;j<n;j++){
//       int sum = 0;
//        iterate from i to j and add all    
//     }
// }

//BETTER SOLUTION
//ignore the last loop

//optimal solution
// class Solution {
// public:
//     int maxSubArray(vector<int>& arr) 
//     {   
//         ios_base::sync_with_stdio(0);
//         cin.tie(nullptr);
//         int n= arr.size();
//         int maxi = INT_MIN;
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//             maxi = max(sum,maxi);
//             if(sum<0){
//                 sum=0;
//             }
//         }
        
//     return maxi;
//     }
    
// };

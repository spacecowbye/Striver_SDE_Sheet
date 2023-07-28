//brute force solution
//find out the amount of water trapped at that index
//for each index i, amount of water trapped there = min(max height at left,max height at right)-arr[i];
//to find max height on left, you need to run a loop from o to i, to find max height on right you need to run a loop from right to n-1
// class Solution {
// public:
//     int trap(vector<int>& arr) {
//         int n = arr.size();
//         int sum = 0;
        
//         for(int i=0;i<n;i++){
//             int maxl = 0;
//             int maxr = 0;
//             for(int j=0;j<=i;j++){
//                 maxl=max(arr[j],maxl);
//             }
//             for(int k=i;k<n;k++){
//                 maxr = max(arr[k],maxr);
//             }
//             sum+=min(maxl,maxr)-arr[i];
//         }
//         return sum;
//     }
// };
//tc=>o(n^2)
//sc=>o(1)

//it will give time limit exceeded for large values of n

//better solution
//use a prefix array and a suffix array
//do precomputation to find left max and right max and save time complexity
//for each element of array you can get them in O(1)
// tc=>o(n)+o(n)+o(n)
// sc=>o(n)+o(n)

// class Solution {
// public:
//     int trap(vector<int>& arr) {
//         int n = arr.size();
//         int sum = 0,max_left=0,max_right=0;
//         int maxl[n];
//         int maxr[n];
//         for(int i=0;i<n;i++){
//             max_left=max(max_left,arr[i]);
//             maxl[i]=max_left;
//         }
//         for(int i=n-1;i>=0;i--){
//             max_right = max(max_right,arr[i]);
//             maxr[i]=max_right;
//         }
//         for(int i=0;i<n;i++){
//            sum+=min(maxl[i],maxr[i])-arr[i];
//         }
       
//         return sum;
//     }
// };
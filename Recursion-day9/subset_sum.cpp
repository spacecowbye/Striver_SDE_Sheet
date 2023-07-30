//use power set
//brute force solution taking time complexity 2^n*n

//recursive solution
//2^n +2^nlog(2^n)
//space complexity = >2^n
// class Solution
// {
// public:
//     void recur(int index,vector<int> arr,vector<int> &temp,int sum){
//         if(index == arr.size()){
//             temp.push_back(sum);
//             return;
//         }
//         recur(index+1,arr,temp,sum+arr[index]);
//         recur(index+1,arr,temp,sum);
//     }
//     vector<int> subsetSums(vector<int> arr, int N)
//     {
//         // Write Your Code her
//         vector<int> subsetSum;
//         int index = 0;
//         int sum = 0;
//         recur(index,arr,subsetSum,sum);
//         sort(subsetSum.begin(),subsetSum.end());
//         return subsetSum;
//     }
// };
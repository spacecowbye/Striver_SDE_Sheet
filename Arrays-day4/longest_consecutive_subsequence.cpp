//BRUTE FORCE SOLUTION
// class Solution {
// public:
//     bool ls(vector <int> &arr,int target){
//         int n = arr.size();
//         for(int i=0;i<n;i++){
//             if(arr[i]==target){
//                 return true;
                
//             }
//         }
//         return false;
//     }
//     int longestConsecutive(vector<int>& arr) {
//         int n = arr.size();
//         int ct = 0;
//         int longest = 1;
//         for(int i=0;i<n;i++){
//             int x = arr[i];
//             ct = 1;
//             while(ls(arr,x+1)==true){
//                 x=x+1;
//                 ct = ct+1;
//                 longest = max(longest,ct);
//             }
//         }
//         return longest;
//     }
// };

//BETTER SOLUTION
//sort it
// class Solution {
// public:
//     int longestConsecutive(vector<int>& arr) {
//         int n = arr.size();
//         int last_smallest = INT_MIN;
//         sort(arr.begin(),arr.end());
//         int longest = 1;
//         int cnt =0;
//         for(int i=0;i<n;i++){
//             if(arr[i]-1==last_smallest){
//                cnt = cnt+1;
//                last_smallest = arr[i];
//             }
//             else if(arr[i]!=last_smallest){
//                 cnt=1;
//                 last_smallest = arr[i];
//             }
//             longest = max(longest,cnt);
//         }
//         return longest;
//     }
// };

//optimal solution
// class Solution {
// public:
//     int longestConsecutive(vector<int>& arr) {
//         unordered_set <int> st;
//         int n = arr.size();
//         int longest = 1;
//         if(n==0){
//             return 0;
//         }
//         for(int i=0;i<arr.size();i++){
//             st.insert(arr[i]);
//         }
//         for(auto it :st){
//             if(st.find(it-1)==st.end()){
//                int cnt =1;
//                int x= it;
//                while(st.find(x+1)!=st.end()){
//                    x=x+1;
//                    cnt++;
                   
//                } 
//                longest = max(longest,cnt);
//             }
            
//         }
//     return longest;
//     }

// };
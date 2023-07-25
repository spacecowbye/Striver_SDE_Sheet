// class Solution {
// public:
//     int removeDuplicates(vector<int>& arr) {
//        int j=0;
//        int n = arr.size();
//        for(int i=0;i<n;i++){
//            if(i>0 && arr[i]==arr[i-1])continue;
//            else{
//            arr[j]=arr[i];
//            j++;
//            }
//        }
//        return j;
//     }
// };
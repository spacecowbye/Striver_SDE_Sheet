//brute force solution
//ca use merge sort which has time complexity of nlogn and space complexity of (n)

//better solution
//do a single iteration, three variables for count0,count1,count2
//count 0 has number of 0s, count 1 has number of 1s and count2 has number of 2s
//for(int i=0;i<count1;i++){
//    arr[i]=0
//}
//for(int j=count0;j<count0+count1;j++) {
//arr[i]=1
    //}
//for(int i=count0+count1;i<n;i++){
//arr[i]=2    
//}
// tc =>O(2n) constant space



//BEST SOLUIION 
//Dutch national flag
//algorithm is used to solve this problem in O(N). Here we are given an array consisting only//
//three pointers lo mid high
//0 to lo-1 has 0s
//lo to mid -1 is 1
//high+1 to n-1 is 2
// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
//         int low = 0;
//        int mid = 0;
//        int high = arr.size()-1;
//        while(mid<=high){
           
//            if(arr[mid]==0){
//               swap(arr[mid],arr[low]);
//               mid++;
//               low++;
//            }
//            else if(arr[mid]==1){
//                mid++;
//            }
//            else if(arr[mid]==2){
//                swap(arr[mid],arr[high]);
//                high = high-1;
               
//            }
//        }
//     }        

// };
//Hare and tortoise algorithm to find loop in circular linked list
//only way to find duplicate number in an array consisting of n+1 numbers in o(n)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = nums[0];
//         int fast = nums[0];
//         do{
//             slow = nums[slow];
//             fast = nums[nums[fast]];

//         }while(slow!=fast);
//         fast = nums[0];
//          while (slow != fast) {
//     slow = nums[slow];
//     fast = nums[fast];
//   }
//         return slow;
        
//     }
// };
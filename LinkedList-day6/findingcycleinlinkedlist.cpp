//naive approach
//hash every address
//tc =>o(n) and sc=>o(n)
//if traversed node exsted befoorethan it is a loop

//optimal approach
//hare and tortoise algortihm
//take a slow poiner and fast pointer
//when they collide,reset slow pointer and then increment both by one step

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=nullptr && fast->next!=nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow==fast){
//                 return true;
//             }
//         }   
//         return false;
//     }
// };
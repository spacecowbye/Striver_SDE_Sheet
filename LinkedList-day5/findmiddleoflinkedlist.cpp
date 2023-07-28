// Brute Force solution
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        
//         int ct = 0;
//         ListNode* temp = head;
//         while(temp!=nullptr){
//             ct++;
//             temp=temp->next;
//         }
//         int to_find = ct/2+1;
//         int pos = 1;
//         ListNode* ans = head;
//         while(pos<to_find){
//             ans = ans->next; 
//             pos++;
//         }
//         return ans;

//     }
// };
//tc = > o(n)+O(n/2)

//optimal solution
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!=nullptr&&fast->next!=nullptr){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };
//tc => o(n/2)
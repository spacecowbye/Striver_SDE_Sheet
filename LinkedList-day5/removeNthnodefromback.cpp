//brute force solution using two passes
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int ct = 0;
//         ListNode* temp = head;
//         while(temp!=nullptr){
//             ct++;
//             temp=temp->next;
//         }
//         if(ct==n){
//             head=head->next;
//             return head;
//         }
//         int counter =1;
//         int rem = ct-n;
//         ListNode* ans = head;
//         while(counter<rem){
//             ans=ans->next;
//             counter++;
//         }
//         ans->next = ans->next->next;
//         return head;
//     }
// };

//optimal solution using one pass
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* start = new ListNode();
//         start->next = head;
//         ListNode* fast = start;
//         ListNode* slow = start;
//         for(int i=0;i<n;i++){
//             fast=fast->next;
//         }
//         while(fast->next!=nullptr)
//         {
//             slow= slow->next;
//             fast= fast->next;
//         }
//        slow->next = slow->next ->next;
//         return start->next;
//     }
// };
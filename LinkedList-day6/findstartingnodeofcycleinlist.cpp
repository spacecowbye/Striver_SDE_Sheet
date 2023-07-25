//naive solution
//hash every node while iterating,
//check if that node has appeared before
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
//     ListNode *detectCycle(ListNode *head) {
//         unordered_set <ListNode*> st;
//         while(head!=nullptr){
//             if(st.find(head)!=st.end()){
//                 return head;
//             }            
//             st.insert(head);
//             head=head->next;
//         }
//         return nullptr;
//     }
// };
//tc=>o(n)
//sc=>o(n)

//optimal solution
//hare and tortoise algorithm
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
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         ListNode* entry =head;
//         while(fast!=nullptr&&fast->next!=nullptr){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 slow = entry;
//                 while(slow!=fast){
//                     slow= slow->next;
//                     fast= fast->next;
                    
//                 }
//                 return slow;
//             }
//         }
//     return nullptr;

        
//     }
// };
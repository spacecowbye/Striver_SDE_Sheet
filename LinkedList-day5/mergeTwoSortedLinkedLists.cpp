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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* dummy = new ListNode();
//         ListNode* temp = dummy;
//         while(list1!=nullptr&&list2!=nullptr){
//             if(list1->val<=list2->val){
//                 temp->next = list1;
//                 list1=list1->next;
//             }
//             else{
//                 temp->next = list2;
//                 list2=list2->next;
//             }
//             temp=temp->next;
//         }
//         while(list1!=nullptr){
//             temp->next = list1;
//             list1=list1->next;
//             temp=temp->next;
//         }
//         while(list2!=nullptr){
//             temp->next = list2;
//             list2=list2->next;
//             temp=temp->next;
//         }
//         return dummy->next;
//     }
// };

//optimised solution
// class Solution {
// public:x
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         if (l1 == nullptr) return l2;
//         if (l2 == nullptr) return l1;
        
//         if (l1->val > l2->val) {
//             swap(l1, l2);
//         }
        
//         ListNode* res = l1;
//         ListNode* temp = nullptr;
        
//         while (l1 != nullptr && l2 != nullptr) {
//             while (l1 != nullptr && l1->val <= l2->val) {
//                 temp = l1;
//                 l1 = l1->next;
//             }
            
//             temp->next = l2;
//             swap(l1, l2);
//         }

//         return res;
//     }
// };

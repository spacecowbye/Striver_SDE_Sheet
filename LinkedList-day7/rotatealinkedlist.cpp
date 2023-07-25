//naive approach
//find the last node, put it in front
//tc =>o(n*k)
//sc=>o(1)

//optimal approach
// if(k>n) k = k%n
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
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==nullptr||head->next==nullptr||k==0){
//             return head;
//         }
//        int len = 1;
//        ListNode* curr=head;
//        while(curr->next && ++len)curr=curr->next;

//        curr->next = head;
//        k = k%len;
//        k = len-k;
//        while(k--)curr=curr->next;
//         head = curr->next;
//        curr->next = nullptr;
//        return head;
//     }

// };
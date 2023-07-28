//naive approach
//store all the elements in a vector and then run a palindrome check on it
//tc = >o(n+n/2) and sc =>o(n)
//ask the interviewer if you can modify the linked list or not
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
//     ListNode* reverse(ListNode* ptr) {
//         ListNode* pre = nullptr;
//         ListNode* nex = nullptr;
//         while (ptr != nullptr) {
//             nex = ptr->next;
//             ptr->next = pre;
//             pre = ptr;
//             ptr = nex;
//         }
//         return pre;
//     }
    
//     bool isPalindrome(ListNode* head) {
//         if (head == nullptr || head->next == nullptr) return true;
        
//         ListNode* slow = head;
//         ListNode* fast = head;
        
//         while (fast->next != nullptr && fast->next->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         slow->next = reverse(slow->next);
//         slow = slow->next;
//         ListNode* dummy = head;
        
//         while (slow != nullptr) {
//             if (dummy->val != slow->val) return false;
//             dummy = dummy->next;
//             slow = slow->next;
//         }
//         return true;
//     }
// };

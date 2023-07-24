//brute force solution using 
//take one linked list
//iterate over every node in this linked list and compare it with every node in the other list to check if both the nodes are same
//time complexity =>o(m*n)
//sc=>o(1)


//better approach
//hash all addresses while travelling in one list
//traverse the other list and look up the addresses
//tc=>o(m+n), assuming hash table works in o(1)
//sc=>o(n)

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
//     ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
//         unordered_map< ListNode*, int> m;
//         ListNode*  dummy = new ListNode();
//         ListNode*temp = dummy;


//         temp = l1;
//         int index = 0;
//         while(temp!=nullptr){
//             m[temp]=index;
//             index++;
//             temp=temp->next;

//         }
//         while(l2!=nullptr){
//             if(m.find(l2)!=m.end()){
                
//                 return l2;

//             }
//             l2=l2->next;
//         }
//         return nullptr;

//     }
// };

//optimal approach
//traverse the first linked list, find its length n1
//traverse the second linked list, find its length n2
//find it simaltaneously
//calculate rem = abs(l1-l2)
//move the greater linked list by rem steps
//then move dummy1 and dumm2 by one one step 
//let n2>n1
//tc=> o(m)+o(m-n)+(n)
//tc =>0(2m)
//sc=O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
//     int getDifference(ListNode* head1,ListNode* head2) {
//      int len1 = 0,len2 = 0;
//         while(head1 != NULL || head2 != NULL) {
//             if(head1 != NULL) {
//                 ++len1; head1 = head1->next;
//             }
//             if(head2 != NULL) {
//                 ++len2; head2 = head2->next;
//             }
            
//         }
//         return len1-len2;//if difference is neg-> length of list2 > length of list1 else vice-versa
// }
//     ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
//         int diff = getDifference(head1,head2);
//         if(diff < 0) 
//             while(diff++ != 0) head2 = head2->next; 
//         else while(diff-- != 0) head1 = head1->next;
//         while(head1 != NULL) {
//             if(head1 == head2) return head1;
//             head2 = head2->next;
//             head1 = head1->next;
//         }
//         return head1;

//     }
// };

//BUT BETTER SOLUTION EXISTS
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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA == nullptr||headB == nullptr){
//             return nullptr;
//         }
//         ListNode *a = headA;
//         ListNode *b = headB;
//         while(a!=b){
//             a= a==nullptr? headB : a->next;
//             b= b==nullptr? headA : b->next;

//         }
//         return a;
//     }
// };
//same tc and sc as above
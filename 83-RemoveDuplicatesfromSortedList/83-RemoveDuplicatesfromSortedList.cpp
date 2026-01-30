// Last updated: 1/30/2026, 7:15:46 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14        if (head == NULL)
15            return head;
16
17        ListNode* curr = head;
18
19        while (curr->next != NULL) {
20            if (curr->val == curr->next->val) {
21                curr->next = curr->next->next;
22            } else {
23                curr = curr->next;
24            }
25        }
26        return head;
27    }
28};
29
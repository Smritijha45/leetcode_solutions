// Last updated: 2/11/2026, 9:04:11 AM
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
13    ListNode* swapNodes(ListNode* head, int k) {
14        int length = 0;
15        ListNode* temp = head;
16
17        while (temp != NULL) {
18            length++;
19            temp = temp->next;
20        }
21
22        ListNode* first = head;
23        for (int i = 1; i < k; i++) {
24            first = first->next;
25        }
26
27        ListNode* second = head;
28        for (int i = 1; i < length - k + 1; i++) {
29            second = second->next;
30        }
31
32        int tempVal = first->val;
33        first->val = second->val;
34        second->val = tempVal;
35
36        return head;
37    }
38};
39
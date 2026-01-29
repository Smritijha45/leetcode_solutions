// Last updated: 1/29/2026, 11:19:57 PM
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
13    bool isPalindrome(ListNode* head) {
14        if (!head || !head->next)
15            return true;
16
17        ListNode* slow = head;
18        ListNode* fast = head;
19
20        while (fast && fast->next) {
21            slow = slow->next;
22            fast = fast->next->next;
23        }
24
25        ListNode* prev = NULL;
26        while (slow) {
27            ListNode* nextNode = slow->next;
28            slow->next = prev;
29            prev = slow;
30            slow = nextNode;
31        }
32
33        ListNode* left = head;
34        ListNode* right = prev;
35
36        while (right) {
37            if (left->val != right->val)
38                return false;
39            left = left->next;
40            right = right->next;
41        }
42
43        return true;
44    }
45
46}
47;
48
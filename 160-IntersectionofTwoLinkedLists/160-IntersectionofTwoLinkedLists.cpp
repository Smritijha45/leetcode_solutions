// Last updated: 2/8/2026, 10:30:31 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
12        if (!headA || !headB)
13            return NULL;
14
15        ListNode* pA = headA;
16        ListNode* pB = headB;
17
18        while (pA != pB) {
19            pA = (pA == NULL) ? headB : pA->next;
20            pB = (pB == NULL) ? headA : pB->next;
21        }
22
23        return pA;
24    }
25
26}
27;
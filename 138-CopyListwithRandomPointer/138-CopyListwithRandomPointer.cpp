// Last updated: 2/2/2026, 8:04:22 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    Node* copyRandomList(Node* head) {
20        if (!head)
21            return NULL;
22
23        unordered_map<Node*, Node*> mp;
24        Node* curr = head;
25
26        while (curr) {
27            mp[curr] = new Node(curr->val);
28            curr = curr->next;
29        }
30
31        curr = head;
32        while (curr) {
33            mp[curr]->next = mp[curr->next];
34            mp[curr]->random = mp[curr->random];
35            curr = curr->next;
36        }
37
38        return mp[head];
39    }
40};
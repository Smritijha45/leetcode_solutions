// Last updated: 4/5/2026, 7:44:23 PM
1class Solution {
2public:
3    string removeDuplicateLetters(string s) {
4        vector<int> count(26, 0);
5        vector<bool> used(26, false);
6
7        for (char c : s) {
8            count[c - 'a']++;
9        }
10
11        string stack = "";
12
13        for (char c : s) {
14            count[c - 'a']--;
15
16            if (used[c - 'a'])
17                continue;
18
19            while (!stack.empty() && stack.back() > c &&
20                   count[stack.back() - 'a'] > 0) {
21                used[stack.back() - 'a'] = false;
22                stack.pop_back();
23            }
24
25            stack.push_back(c);
26            used[c - 'a'] = true;
27        }
28
29        return stack;
30    }
31};
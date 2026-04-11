// Last updated: 4/11/2026, 11:58:19 AM
1class Solution {
2public:
3    void solve(int open, int close, int n, string curr, vector<string>& ans) {
4        if (curr.length() == 2 * n) {
5            ans.push_back(curr);
6            return;
7        }
8
9        if (open < n) {
10            solve(open + 1, close, n, curr + '(', ans);
11        }
12
13        if (close < open) {
14            solve(open, close + 1, n, curr + ')', ans);
15        }
16    }
17
18    vector<string> generateParenthesis(int n) {
19        vector<string> ans;
20        solve(0, 0, n, "", ans);
21        return ans;
22    }
23};
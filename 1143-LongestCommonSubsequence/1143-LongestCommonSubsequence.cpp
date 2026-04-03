// Last updated: 4/3/2026, 9:08:57 AM
1class Solution {
2public:
3    int longestCommonSubsequence(string text1, string text2) {
4        int n = text1.size();
5        int m = text2.size();
6
7        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
8
9        for (int i = 1; i <= n; i++) {
10            for (int j = 1; j <= m; j++) {
11                if (text1[i - 1] == text2[j - 1]) {
12                    dp[i][j] = 1 + dp[i - 1][j - 1];
13                } else {
14                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
15                }
16            }
17        }
18
19        return dp[n][m];
20    }
21};
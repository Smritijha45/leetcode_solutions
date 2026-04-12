// Last updated: 4/12/2026, 11:32:29 PM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n = haystack.size();
5        int m = needle.size();
6
7        if (m == 0) return 0;
8
9        for (int i = 0; i <= n - m; i++) {
10            int j = 0;
11            while (j < m && haystack[i + j] == needle[j]) {
12                j++;
13            }
14            if (j == m) return i;
15        }
16
17        return -1;
18    }
19};
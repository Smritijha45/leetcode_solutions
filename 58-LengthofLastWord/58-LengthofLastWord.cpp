// Last updated: 2/3/2026, 6:10:51 PM
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int i = s.length() - 1;
5        int count = 0;
6        while (i >= 0 && s[i] ==' ') {
7            i--;
8        }
9        while (i >= 0 && s[i] !=' ') {
10            count++;
11            i--;
12        }
13        return count;
14    }
15};
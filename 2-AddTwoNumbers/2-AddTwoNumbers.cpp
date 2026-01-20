// Last updated: 1/20/2026, 5:31:54 PM
1class Solution {
2public:
3    bool doesAliceWin(string s) {
4        for (char c : s) {
5            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
6                return true;
7            }
8           
9        }
10         return false;
11    }
12};
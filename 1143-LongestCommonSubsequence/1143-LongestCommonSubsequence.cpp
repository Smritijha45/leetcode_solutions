// Last updated: 4/9/2026, 11:04:16 PM
1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char, int> mp = {{'I', 1},   {'V', 5},   {'X', 10},
5                                       {'L', 50},  {'C', 100}, {'D', 500},
6                                       {'M', 1000}};
7
8        int ans = 0;
9
10        for (int i = 0; i < s.length(); i++) {
11
12            if (i + 1 < s.length() && mp[s[i]] < mp[s[i + 1]]) {
13                ans -= mp[s[i]];
14            } else {
15                ans += mp[s[i]];
16            }
17        }
18
19        return ans;
20    }
21};
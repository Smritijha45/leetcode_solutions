// Last updated: 2/19/2026, 6:00:41 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<int> lastIndex(256, -1);
5        int left = 0, maxLength = 0;
6
7        for (int right = 0; right < s.length(); right++) {
8
9            left = max(left, lastIndex[s[right]] + 1);
10            lastIndex[s[right]] = right;
11
12            maxLength = max(maxLength, right - left + 1);
13        }
14
15        return maxLength;
16    }
17};
18
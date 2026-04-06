// Last updated: 4/6/2026, 9:35:57 PM
1class Solution {
2public:
3    int longestPalindrome(string s) {
4        unordered_map<char, int> freq;
5        
6        // Count frequency
7        for (char c : s) {
8            freq[c]++;
9        }
10        
11        int length = 0;
12        bool hasOdd = false;
13        
14        for (auto &it : freq) {
15            if (it.second % 2 == 0) {
16                length += it.second;
17            } else {
18                length += it.second - 1;
19                hasOdd = true;
20            }
21        }
22        
23        
24        if (hasOdd) length += 1;
25        
26        return length;
27    }
28};
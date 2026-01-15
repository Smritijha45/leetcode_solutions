// Last updated: 1/15/2026, 5:21:23 PM
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int count = 0;
5        for (int i : nums) {
6            int digits = 0;
7            int temp = i;
8            while (temp > 0) {
9                digits++;
10                temp /= 10;
11            }
12            if (digits % 2 == 0) {
13                count++;
14            }
15        }
16        return count;
17    }
18};
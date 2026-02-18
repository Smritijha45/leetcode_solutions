// Last updated: 2/18/2026, 7:36:06 PM
1class Solution {
2public:
3    long long subArrayRanges(vector<int>& nums) {
4        int n = nums.size();
5        long long ans = 0;
6
7        for (int i = 0; i < n; i++) {
8            int mini = nums[i];
9            int maxi = nums[i];
10
11            for (int j = i; j < n; j++) {
12                mini = min(mini, nums[j]);
13                maxi = max(maxi, nums[j]);
14
15                ans += (long long)(maxi - mini);
16            }
17        }
18
19        return ans;
20    }
21};
22
// Last updated: 1/15/2026, 11:46:00 AM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n = nums.size();
5        int currentSum = nums[0];
6        int maxSum = nums[0];
7        for (int i = 1; i < n; i++) {
8            currentSum = max(nums[i], currentSum + nums[i]);
9            maxSum = max(maxSum, currentSum);
10        }
11        return maxSum;
12    }
13};
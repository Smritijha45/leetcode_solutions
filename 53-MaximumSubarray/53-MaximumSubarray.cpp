// Last updated: 1/13/2026, 10:49:48 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currentSum = nums[0];
        int maxSum = nums[0];
        for (int i = 1; i < n; i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};
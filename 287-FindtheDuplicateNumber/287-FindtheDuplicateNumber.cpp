// Last updated: 1/17/2026, 6:27:52 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow = nums[0];
5        int fast = nums[0];
6        do {
7            slow = nums[slow];
8            fast = nums[nums[fast]];
9        } while (slow != fast);
10        fast = nums[0];
11        while (slow != fast) {
12            slow = nums[slow];
13            fast = nums[fast];
14        }
15
16        return slow;
17    }
18};
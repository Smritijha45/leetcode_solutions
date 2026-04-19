// Last updated: 4/20/2026, 1:07:19 AM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int, int> mp;
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (mp.find(nums[i]) != mp.end()) {
8                if (i - mp[nums[i]] <= k) {
9                    return true;
10                }
11            }
12            mp[nums[i]] = i;
13        }
14
15        return false;
16    }
17};
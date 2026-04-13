// Last updated: 4/13/2026, 11:12:18 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> res;
5        sort(nums.begin(), nums.end());
6
7        for (int i = 0; i < nums.size(); i++) {
8
9            if (i > 0 && nums[i] == nums[i - 1])
10                continue;
11
12            int left = i + 1, right = nums.size() - 1;
13
14            while (left < right) {
15                int sum = nums[i] + nums[left] + nums[right];
16
17                if (sum == 0) {
18                    res.push_back({nums[i], nums[left], nums[right]});
19
20                    while (left < right && nums[left] == nums[left + 1])
21                        left++;
22                    while (left < right && nums[right] == nums[right - 1])
23                        right--;
24
25                    left++;
26                    right--;
27                } else if (sum < 0) {
28                    left++;
29                } else {
30                    right--;
31                }
32            }
33        }
34        return res;
35    }
36};
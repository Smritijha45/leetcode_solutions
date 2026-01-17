// Last updated: 1/17/2026, 4:35:27 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n = nums.size();
5        int low = 0, mid = 0, high = n - 1;
6        while (mid <= high) {
7            if (nums[mid] == 0) {
8                swap(nums[low], nums[mid]);
9                low++;
10                mid++;
11            } else if (nums[mid] == 1) {
12                mid++;
13            } else {
14                swap(nums[mid], nums[high]);
15                high--;
16            }
17        }
18    }
19};
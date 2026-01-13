// Last updated: 1/13/2026, 10:49:57 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            if (nums[i] == val) {

                for (int j = i + 1; j < n; ++j) {
                    nums[j - 1] = nums[j];
                }
                --n;
            } else {
                i++;
            }
        }
        return n;
    }
};

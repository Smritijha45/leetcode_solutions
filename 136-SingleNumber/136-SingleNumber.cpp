// Last updated: 1/15/2026, 5:02:46 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans=0;
5        for(int i : nums){
6            ans^=i;
7        }
8        return ans;
9    }
10
11};
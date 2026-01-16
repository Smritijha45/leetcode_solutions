// Last updated: 1/16/2026, 10:52:44 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        unordered_map<int, int> mp;
5        mp[0] = 1;  
6        
7        int sum = 0;
8        int count = 0;
9        
10        for (int num : nums) {
11            sum += num;
12            
13            if (mp.find(sum - k) != mp.end()) {
14                count += mp[sum - k];
15            }
16            
17            mp[sum]++;
18        }
19        
20        return count;
21    }
22};
23
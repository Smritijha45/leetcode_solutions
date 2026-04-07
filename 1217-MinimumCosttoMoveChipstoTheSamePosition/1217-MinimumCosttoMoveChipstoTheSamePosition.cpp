// Last updated: 4/7/2026, 4:44:00 PM
1class Solution {
2public:
3    int minCostToMoveChips(vector<int>& position) {
4        int even = 0, odd = 0;
5        
6        for (int pos : position) {
7            if (pos % 2 == 0) even++;
8            else odd++;
9        }
10        
11        return min(even, odd);
12    }
13};
// Last updated: 2/10/2026, 11:18:42 AM
1class Solution {
2public:
3    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
4
5        sort(boxTypes.begin(), boxTypes.end(),
6             [](vector<int>& a, vector<int>& b) { return a[1] > b[1]; });
7
8        int totalUnits = 0;
9
10        for (auto& box : boxTypes) {
11            if (truckSize == 0)
12                break;
13
14            int boxesTaken = min(truckSize, box[0]);
15            totalUnits += boxesTaken * box[1];
16            truckSize -= boxesTaken;
17        }
18
19        return totalUnits;
20    }
21};
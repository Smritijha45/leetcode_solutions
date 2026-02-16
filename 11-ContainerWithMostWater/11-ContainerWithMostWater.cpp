// Last updated: 2/16/2026, 9:08:28 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int maxWater = 0;
7
8        while (left < right) {
9            int width = right - left;
10            int h = min(height[left], height[right]);
11            int area = width * h;
12
13            maxWater = max(maxWater, area);
14
15            if (height[left] < height[right]) {
16                left++;
17            } else {
18                right--;
19            }
20        }
21
22        return maxWater;
23    }
24};
25
// Last updated: 2/7/2026, 10:10:30 PM
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4
5        vector<vector<int>> triangle;
6
7        for (int i = 0; i < numRows; i++) {
8            vector<int> row(i + 1, 1);
9            for (int j = 1; j < i; j++) {
10                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
11            }
12            triangle.push_back(row);
13        }
14        return triangle;
15    }
16};
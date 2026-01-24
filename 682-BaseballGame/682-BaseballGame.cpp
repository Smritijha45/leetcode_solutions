// Last updated: 1/24/2026, 4:16:44 PM
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        stack<int> s;
5        for (auto x : operations) {
6            if (x == "C") {
7                s.pop();
8            }
9
10            else if(x == "D") {
11                int a = s.top();
12                s.push(a * 2);
13            }
14            else if(x == "+") {
15                int a = s.top();
16                s.pop();
17                int b = s.top();
18                s.push(a);
19                s.push(a + b);
20            }
21            else {
22                s.push(stoi(x));
23            }
24        }
25        int ans = 0;
26        while (!s.empty()) {
27            ans += s.top();
28            s.pop();
29        }
30        return ans;
31    }
32};
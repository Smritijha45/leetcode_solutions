// Last updated: 1/23/2026, 9:22:10 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char ch : s) {
7            if (ch == '(' || ch == '{' || ch == '[') {
8                st.push(ch);
9            } else {
10                if (st.empty())
11                    return false;
12                char top = st.top();
13                st.pop();
14
15                if ((ch == ')' && top != '(')||(ch == '}' && top != '{')||(
16                        ch == ']' && top != '[')) {
17                    return false;
18                }
19            }
20        }
21        return st.empty();
22    }
23};
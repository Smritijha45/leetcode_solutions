// Last updated: 1/25/2026, 7:19:05 PM
1class MinStack {
2public:
3    stack<int> st;
4    stack<int> minSt;
5
6    MinStack() {}
7
8    void push(int val) {
9        st.push(val);
10        if (minSt.empty())
11            minSt.push(val);
12        else
13            minSt.push(min(val, minSt.top()));
14    }
15
16    void pop() {
17        st.pop();
18        minSt.pop();
19    }
20
21    int top() { return st.top(); }
22
23    int getMin() { return minSt.top(); }
24};
25
26/**
27 * Your MinStack object will be instantiated and called as such:
28 * MinStack* obj = new MinStack();
29 * obj->push(val);
30 * obj->pop();
31 * int param_3 = obj->top();
32 * int param_4 = obj->getMin();
33 */
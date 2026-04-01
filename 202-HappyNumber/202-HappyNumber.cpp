// Last updated: 4/1/2026, 2:51:48 PM
1class Solution {
2public:
3    int getNext(int n) {
4        int sum = 0;
5        while (n > 0) {
6            int digit = n % 10;
7            sum += digit * digit;
8            n /= 10;
9        }
10        return sum;
11    }
12
13    bool isHappy(int n) {
14        int slow = n;
15        int fast = getNext(n);
16
17        while (fast != 1 && slow != fast) {
18            slow = getNext(slow);
19            fast = getNext(getNext(fast));
20        }
21
22        return fast == 1;
23    }
24};
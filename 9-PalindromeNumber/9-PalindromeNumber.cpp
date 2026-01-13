// Last updated: 1/13/2026, 10:49:55 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x < 10)
            return true;

        int digits[10], n = 0;
        while (x > 0) {
            digits[n++] = x % 10;
            x /= 10;
        }

        int reversed[10];
        for (int i = 0; i < n; i++) {
            reversed[i] = digits[n - 1 - i];
        }

        for (int i = 0; i < n; i++) {
            if (digits[i] != reversed[i])
                return false;
        }
        return true;
    }
};
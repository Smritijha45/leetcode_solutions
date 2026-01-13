// Last updated: 1/13/2026, 10:49:28 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
// Last updated: 1/13/2026, 10:49:16 PM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result = s;
        for (int i = 0; i < s.length(); i++) {
            result[indices[i]] = s[i];
        }
        return result;
    }
};
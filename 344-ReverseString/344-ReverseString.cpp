// Last updated: 1/13/2026, 10:49:25 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> temp ; 
        for(int i = n-1 ; i>= 0 ; i --){
            temp.push_back(s[i]);
        }
        for(int i = 0 ; i < n ; i ++){
            s[i] = temp[i];
        }
    }
};
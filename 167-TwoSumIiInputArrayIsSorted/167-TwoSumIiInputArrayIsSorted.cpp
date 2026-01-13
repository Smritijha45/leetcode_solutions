// Last updated: 1/13/2026, 10:49:35 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                return {left + 1, right + 1};  
            }
            
            sum < target ? left++ : right--;
        }

        return {};  
    }
};

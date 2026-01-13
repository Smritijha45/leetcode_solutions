// Last updated: 1/13/2026, 10:49:34 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {

       //Verify the candidate key 
       int candidate = 0;
       int count = 0 ;

       for(auto num : nums){
        if(count == 0){
            candidate = num ;
            count = 1 ;
        }
        else if(num == candidate){
            count ++ ; 
        }
        else{
            count -- ; 
        }
       } 
       
       count = 0 ;
       for(auto num : nums){
        if(candidate == num){
            count ++ ; 
        }
       }
       if(count > nums.size()/2){
        return candidate ; 
       }
       return -1; 
    }
};
// Last updated: 1/13/2026, 10:49:51 PM
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let x = 0;
    for(let i = 0; i<nums.length;i++){
        if(nums[i] != val){
            nums[x] = nums[i];
            x++;
        }
    }
    return x;
};
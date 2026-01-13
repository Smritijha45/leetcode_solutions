// Last updated: 1/13/2026, 10:49:47 PM
/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(arr) {
    let maxP = 0;
    let minV = arr[0] 
    for(let i = 1 ; i < arr.length ; i++){
        if(arr[i] - minV > maxP){
            //update maxP
            maxP = arr[i]-minV;
            }
        if(arr[i] < minV){
            minV = arr[i];
        }
    }
    return maxP;
};
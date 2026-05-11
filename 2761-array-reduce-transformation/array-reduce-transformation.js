/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    //reducer function - reduce((acc,curr) => acc+ curr,0);
    let finalVal = init;
    for(let i=0; i<nums.length; i++){
        finalVal = fn(finalVal,nums[i]);
    }
    return finalVal;
    //T.C - O(n) S.C - O(1).
};
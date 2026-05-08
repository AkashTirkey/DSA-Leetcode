/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    // const transformedArr = [];
    // for(let i=0; i<arr.length; i++){
    //     transformedArr[i] = fn(arr[i],i);
    // }
    // return transformedArr;
    //T.C & S.C - O(n).

    //optimised approach
    for(let i=0; i<arr.length; i++){
        arr[i] = fn(arr[i],i);
    }
    return arr;
    //S.C - O(1) T.C-O(n)
};
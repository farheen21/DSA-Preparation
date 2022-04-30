/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    
     let obj = {};

    for (let index = 0; index < nums.length; index++) {
        const val = nums[index] ;
         if (obj[val] !== undefined) {
           return [obj[val], index];
         }
        obj[target - val] = index;
    }
};
// 217 Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


//   @param {number[]} nums
//   @return {boolean}
 

//  Two pointer Approach
var containsDuplicate = function(nums) {
   for (let i = 0 ; i < nums.length ; i++) {
for (let j = i+1 ; j < nums.length ; j++) {
 if (nums[i] === nums[j]) {
  return true;
   }
 }
}
    return false;
};

//  Set solution 
var containsDuplicate = function(nums) {
let set = new Set(nums);
if(set.size !== nums.length){
 return true;
 }
return false;
};


//  Set solution 
var containsDuplicate = function(nums) {
    return (new Set(nums)).size !== nums.length;
 };
 
 
 
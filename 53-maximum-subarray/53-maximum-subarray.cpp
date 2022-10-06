class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int max_sum = INT_MIN;
        
        for(int i = 0 ; i < nums.size() ; i++) {
             cur = max(nums[i] , cur+nums[i]);
             max_sum = max(cur , max_sum);
        }
        
        return max_sum;
    }
};
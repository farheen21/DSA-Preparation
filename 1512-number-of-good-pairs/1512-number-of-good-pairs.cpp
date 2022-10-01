class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    // Brute force
    //     int ans = 0;
    //     for(int i = 0 ; i< nums.size() ; i++) {
    //         for ( int j = i+1 ; j < nums.size() ; j++) {
    //             if (nums[i] == nums[j])
    //                 ans++;
    //         }
    //     }
    //     return ans;
    // }
        
       int res = 0;
        unordered_map<int, int> count;
        for (int a: nums) {
            res += count[a]++;
        }
        return res;
    }     
};
    
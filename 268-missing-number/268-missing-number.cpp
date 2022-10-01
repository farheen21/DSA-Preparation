class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); // 10
        int expectedTotal = (n*(n + 1)) / 2;
        
        int total = 0;
        for (auto i:nums)
            total +=i;
        
        return (expectedTotal - total );
    }  
};

// unordered_set<int>set(nums.begin(), nums.end());
//         for(int i=0; i<=nums.size(); i++)
//             if(!set.count(i))return i;
//         return -1;
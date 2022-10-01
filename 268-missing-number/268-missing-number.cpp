class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            while(i!=nums[i]){
                if(nums[i]==n)break;
                swap(nums[i], nums[nums[i]]);
            }
        }
        for(int i=0; i<n; i++){
            if(i!=nums[i])return i;
        }
        return n;
    }
};

// unordered_set<int>set(nums.begin(), nums.end());
//         for(int i=0; i<=nums.size(); i++)
//             if(!set.count(i))return i;
//         return -1;
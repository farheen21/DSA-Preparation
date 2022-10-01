class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // vector<int> ans;
        // int cnt = 0;
        // for(int i = 0 ; i < nums.size() ; i++) {
        //     for (int j = 0 ; j < nums.size() ; j++) {
        //         if(nums[i] > nums[j])
        //         {
        //              cnt++;
        //         }
        //     }
        //      ans.push_back(cnt);
        //      cnt = 0;
        // }
        // return ans;
        
        
        map<int, int> mp;
        int n = nums.size();
        vector<int> snum = nums;
        sort(snum.begin() , snum.end());
        for(int i = n - 1 ; i >= 0 ; i--) {
            mp[snum[i]] = i;
        }
        
        for (int i = 0 ; i < n ; i++) {
            nums[i] = mp[nums[i]];
        }
        
        return nums;
        
        
//         map<int,int> mp;    
//         int n=nums.size();
//         vector<int> snum=nums;
        
//         sort(snum.begin(),snum.end());
//         for(int i=n-1;i>=0;i--)
//             mp[snum[i]]=i;
        
//         for(int i=0;i<n;i++)
//             nums[i]=mp[nums[i]];
        
//         return nums;
    } 
};

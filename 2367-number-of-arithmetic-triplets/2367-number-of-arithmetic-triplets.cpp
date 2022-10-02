class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      // int ans = 0;
      //   for(int i = 0 ; i < nums.size() ; i++) {
      //       for(int j = i+1 ; j < nums.size() ; j++) {
      //          for(int k = j + 1 ; k < nums.size() ; k++) {
      //              if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
      //                  ans++;
      //          }
      //       }
      //   }
      //   return ans;
        
//         int arr[201] = {0};
//         int ans = 0 ;
//         for (auto it:nums) {
//             arr[it]++;
//         }
       
//         for(auto it:nums) {
//             if( it-diff >= 0 && it+diff <= 200 && arr[it-diff] && arr[it+diff]) {
//                 ans++;
//             }
//         }
//         return ans;
        
        
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            auto idx1 = find(nums.begin(), nums.end(), nums[i]+diff);
            auto idx2 = find(nums.begin(), nums.end(), nums[i]+2*diff);
            
            if(idx1 != nums.end() && idx2 != nums.end())
                count++;
            else
                continue;
        }
        return count;
    }
};
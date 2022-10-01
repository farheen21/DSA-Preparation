class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            for (int j = 0 ; j < nums.size() ; j++) {
                if(nums[i] > nums[j])
                {
                     cnt++;
                }
            }
             ans.push_back(cnt);
             cnt = 0;
        }
        return ans;
    }
};


// int count =0; vector<int> array;
//     for(int i=0; i<nums.size(); i++)
//     {
//         for(int j=0; j<nums.size(); j++)
//         {
//             if(nums[i]>nums[j])
//             {
//                 count++;
//             }
//         }
//         array.push_back(count);
//         count=0;
//     }
//     return array;
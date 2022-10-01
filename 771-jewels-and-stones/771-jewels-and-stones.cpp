class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
//         int ans = 0;
//         sort(jewels.begin(),jewels.end());
//         for(int i = 0 ; i < stones.length(); i++){
//             if(binary_search(jewels.begin(),jewels.end(),stones[i])){
//                 ans++;
//             }
//         }
//         return ans;
        
        
        
        int ans = 0;
        sort(jewels.begin() , jewels.end());
        for(int i = 0 ; i < stones.length() ; i++) {
            if(binary_search(jewels.begin() , jewels.end() , stones[i]))
             ans++;
        }
            return ans;
    }
};
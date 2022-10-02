class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//         int n =names.size();
//         vector<string>res;
//         vector<pair<int,string>>mix;
//         for(int i =0;i<n;i++)
//             mix.push_back({heights[i],names[i]});
//         sort(mix.rbegin(),mix.rend());
//         for(auto name: mix)
//             res.push_back(name.second);
//         return res;
        
        
        vector<string> res;
        vector<pair<int , string>> mix;
        for(int i = 0 ; i < heights.size() ; i++) {
            mix.push_back({heights[i] , names[i]});
        }
        sort(mix.rbegin() , mix.rend());
        for(auto name:mix) 
        res.push_back(name.second);
        return res;
            
    }
};
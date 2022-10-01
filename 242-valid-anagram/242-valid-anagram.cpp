class Solution {
public:
    bool isAnagram(string s, string t) {
//         set<char> set(s.begin() , s.end());
//         for(int i = 0 ; i < t.size() ; i++) {
//             if(set.find([t[i]]) != set.end()) 
//             return true;
//         }
        
//         return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(),t.end());
        
        
        if(s.size()!=t.size()) return false;
     
        for(int i=0; i<s.size();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
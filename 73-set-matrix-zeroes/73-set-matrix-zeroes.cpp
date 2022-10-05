class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
      set<int>rows,cols;
        
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        
        //if we encounter either that row or column number set it to zero
        for(int i = 0;i<matrix.size();i++)
            for(int j = 0;j<matrix[i].size();j++)
                if(rows.find(i)!=rows.end() or cols.find(j)!=cols.end())
                       matrix[i][j] = 0;
        
                
       
    }
};
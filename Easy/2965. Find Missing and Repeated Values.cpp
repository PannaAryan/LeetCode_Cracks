class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
            int duplicate = -1;
            vector<bool> occur(n * n + 1, false);
    
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(occur[grid[i][j]]){
                        duplicate = grid[i][j];
                    }
                    else occur[grid[i][j]] = true;
                }
            }
    
            for(int i=1; i<occur.size(); i++){
                if(!occur[i]) return {duplicate, i};
            }
            return {};
        }
    };
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int rows = land.size();
        int cols = land[0].size();

        vector<vector<int>>ans;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(land[i][j]==1){
                    if((i==0 || land[i-1][j]==0) && (j==0 || land[i][j-1]==0)){
                        int tr = i, tc = j;
                        while(tr<rows && land[tr][tc]==1){
                            tr++;
                        }
                        tr--;
                        while(tc<cols && land[tr][tc]==1){
                            tc++;
                        }
                        tc--;

                        ans.push_back({i, j, tr, tc});
                        j=tc;
                    }

                } 
            }
        }
        return ans;
    }
};
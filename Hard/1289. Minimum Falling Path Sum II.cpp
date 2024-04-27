class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int ans = INT_MAX;

        vector<vector<int>> dypr (n, vector<int>(n,-1));

        for(int i=0; i<n; i++){
            dypr[0][i] = grid[0][i];
        }

        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int temp = ans;

                for(int k=0; k<n; k++){
                    if(k!=j){
                        temp = min(temp, grid[i][j] + dypr[i-1][k]);
                    }
                    dypr[i][j]=temp;
                }
            }
        }

        for(int i=0; i<n; i++){
            ans = min(ans, dypr[n-1][i]);
        }

        return ans;
    }

    
};
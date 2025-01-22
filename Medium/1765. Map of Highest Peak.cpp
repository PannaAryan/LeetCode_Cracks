class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n = isWater.size(), m = isWater[0].size();
        vector<vector<int>> res(n, vector<int>(m, INT_MAX));
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(isWater[i][j] == 1) {
                    res[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            if(x > 0 && res[x-1][y] == INT_MAX) {
                res[x-1][y] = res[x][y] + 1;
                q.push({x-1,y});
            }
            if(x < n-1 && res[x+1][y] == INT_MAX) {
                res[x+1][y] = res[x][y] + 1;
                q.push({x+1,y});
            }
            if(y > 0 && res[x][y-1] == INT_MAX) {
                res[x][y-1] = res[x][y] + 1;
                q.push({x,y-1});
            }
            if(y < m-1 && res[x][y+1] == INT_MAX) {
                res[x][y+1] = res[x][y] + 1;
                q.push({x,y+1});
            }
        }
        
        return res;
    }
};
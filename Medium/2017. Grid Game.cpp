class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long Upper = 0, Lower = 0, min2 = LLONG_MAX;

        for (int num : grid[0]) Upper += num;
        
        for (int col = 0; col < grid[0].size(); col++) {
            Upper -= grid[0][col];
            min2 = min(min2, max(Upper, Lower));
            Lower += grid[1][col];
        }
        return min2;
    }
};
class Solution {

bool isMagic(int i, int j, vector<vector<int>>& grid){
    vector<int>v(10, 0);

    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            int num = grid[i+x][j+y];
            if(num<1 || num>9 || v[num]>0) return false;
            v[num]++;
        }
    }

    int sum = grid[i][j] + grid[i][j+1] + grid[i][j+2];

    for(int x=0; x<3; x++){
        if(sum != (grid[i+x][j] + grid[i+x][j+1] + grid[i+x][j+2])) return false;
    }

    for(int y=0; y<3; y++){
        if(sum != (grid[i][j+y] + grid[i+1][y+j] + grid[i+2][y+j])) return false;
    }

    if(sum != (grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2])) return false;
    if(sum != (grid[i+2][j] + grid[i+1][j+1] + grid[i][j+2])) return false;

    return true;
}


public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt=0;
        int rows=grid.size();
        int cols = grid[0].size();

        if(rows<3 || cols<3) return 0;

        for(int i=0; i<=rows-3; i++){
            for(int j=0; j<=cols-3; j++){
                if(isMagic(i, j, grid)) cnt++;
            }
        }
        return cnt;
    }
};
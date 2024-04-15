class Solution {
public:
    
    int alive(vector<vector<int>>& temp, int i, int j, int m, int n){
        int living = 0;

        if(i>0){
            if(temp[i-1][j]==1) living++;
        }
        if(j>0){
            if(temp[i][j-1]==1) living++;
        }
        if(i < n-1){
            if(temp[i+1][j]==1) living++;
        }
        if(j < m-1){
            if(temp[i][j+1]==1) living++;
        }
        if(i>0 && j>0){
            if(temp[i-1][j-1]==1) living++;
        }
        if(i>0 && j<m-1){
            if(temp[i-1][j+1]==1) living++;
        }
        if(i<n-1 && j>0){
            if(temp[i+1][j-1]==1) living++;
        }
        if(i<n-1 && j<m-1){
            if(temp[i+1][j+1]==1) living++;
        }

        return living;

    }
    
    
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> temp = board;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int cnt = alive(temp, i, j, m, n);

                if(board[i][j]==0){
                    if(cnt==3) board[i][j]=1;
                }

                if(board[i][j]==1){
                    if(cnt<2 || cnt>3) board[i][j]=0;
                }
            }
        }
    }
};
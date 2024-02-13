class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int maxx=0;
       for(int i=0; i<accounts.size(); i++){
           int res = 0;
           for(int j=0; j<accounts[i].size(); j++){
               res += accounts[i][j];
           }
           if(maxx<res) maxx = res;
       } 
       return maxx;
    }
};
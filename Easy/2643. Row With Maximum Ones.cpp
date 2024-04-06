class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int idx=0, one=0;
        for(int i=0; i<mat.size(); i++){
            int temp=0;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1) temp++;
            }
            if(temp>one){
                one=temp;
                idx=i;
            }
        }
        vector<int>ans;
        ans.push_back(idx);
        ans.push_back(one);
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int , int> str;
        for(int num: nums){
            str[num]++;
        }

        vector<vector<int>>ans;

        for(const auto& pair: str){
            int num=pair.first;
            int frq=pair.second;

            if(frq > ans.size()){
                ans.resize(frq);
            }

            for(int i=0; i<frq; i++){
                ans[i].push_back(num);
            }
        }
        return ans;
    }
};
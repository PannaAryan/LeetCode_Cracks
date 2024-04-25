class Solution {
public:
    int longestIdealString(string s, int k) {
        int ans[150] = {};
        int res = 0;

        for(auto& i : s){
            for(int j= i-k; j <= i+k; j++){
                ans[i] = max(ans[i], ans[j]);

            }
            res = max(res, ++ans[i]);
        }
        return res;
    }
};
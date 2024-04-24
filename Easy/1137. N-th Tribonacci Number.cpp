class Solution {
public:
    int tribonacci(int n) {
        if(n<2) return n;

        vector<int>ans;

        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(1);

        for(int i=3; i<=n; i++){
            int temp = ans[0] + ans[1] + ans[2];
            ans[0] = ans[1];
            ans[1] = ans[2];
            ans[2] = temp;
        }

        return ans[2];

    }
};
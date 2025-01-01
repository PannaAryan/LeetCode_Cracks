class Solution {
public:
    int maxScore(string s) {
        int one=0, zero=0, maxx=-1;
        int n=s.size();
        vector<int>pre(n, 0);

        for(int i=s.size()-1; i>0; i--)
        {
            if(s[i]=='1'){
                one++;
            }
            pre[i-1]=one;
        }

        for(int i=0; i<n-1; i++){
            if(s[i]=='0'){
                zero++;
            }
            if(zero+pre[i] > maxx) maxx=zero+pre[i];
        }
        return maxx;
    }
};

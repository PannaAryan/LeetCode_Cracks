class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0, temp=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        for(int i=0; i<g.size(); i++){
            for(int j=temp; j<s.size(); j++){
                if(g[i]<=s[j]){
                    temp=j+1;
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
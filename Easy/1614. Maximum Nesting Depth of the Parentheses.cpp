class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, maxx=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                cnt++;
                maxx = max(cnt, maxx);
            }
            else if(s[i]==')') cnt--;
        }
        return maxx;
    }
};
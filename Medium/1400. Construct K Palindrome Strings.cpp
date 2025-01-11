class Solution {
public:
    bool canConstruct(string s, int k) {
        sort(s.begin(), s.end());
        int tmp=1, odd=0;

        for(int i=0; i<s.length()-1; i++){
            if(s[i]==s[i+1]) tmp++;
            else{
                if(tmp%2 != 0){
                    if(i==s.length()-2) odd += 2;
                    else odd++;
                }
                tmp = 1;
            }
        }

        if(k>s.length() || k<odd) return false;
        else return true;
    }
};
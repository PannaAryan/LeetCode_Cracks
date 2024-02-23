class Solution {
public:
    bool isPalindrome(string s) {
        string ans;

        for(auto ch : s){
            if(isalnum(ch)){
                ans += tolower(ch);
            }
        }

        int n=ans.size(), i=0;

        bool flag=true;

        while(i< n/2){
            if(ans[i]!=ans[n-i-1]){
                flag=false;
                break;
            }
            i++;
        }
        return flag;
    }
};
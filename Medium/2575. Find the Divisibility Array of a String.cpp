class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n = word.size();
        vector<int>ans(n, 1);
        long int num = 0;

        for(int i=0; i<n; i++){
            num = num*10 + (word[i]-'0');
            if(num % m != 0){
                ans[i]=0;
            }
            num = num%m;
        }
        return ans;
    }
};
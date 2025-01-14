class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>frq(n+1, 0);
        vector<int>ans;
        int cnt = 0;

        for(int i=0; i<n; i++){
            if(++frq[A[i]] == 2) cnt++;
            if(++frq[B[i]] == 2) cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};
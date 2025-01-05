class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>sft(n+1, 0);

        for(auto& sf : shifts){
            int l=sf[0], r=sf[1], d=sf[2];
            sft[l] += (d == 1 ? 1 : -1);
            sft[r+1] -= (d == 1 ? 1 : -1);
        }

        int current = 0;
        for(int i=0; i<n; i++){
            current += sft[i];
            sft[i] = current;
        }

        for(int i=0; i<n; i++){
            int net = (sft[i] % 26 + 26) % 26;
            s[i] = 'a' + (s[i] -'a' + net) % 26;
        }

        return s;

    }
};
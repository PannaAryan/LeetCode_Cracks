class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map<int, int>cnt;
        int mask=0;
        cnt[0]=1;

        long long ans = 0;

        for(char c : word){
            mask ^= 1 << (c - 'a');
            ans += cnt[mask];
            for(int i=0; i<10; i++){
                ans += cnt[mask ^ (1 << i)];
            }
            cnt[mask]++;
        }
        return ans;
    }
};
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int>cnt;
        long long gp = 0, n = nums.size();

        for(int i=0; i<n;  i++){
            int temp = nums[i] - i;
            gp += cnt[temp];
            cnt[temp]++;
        }

        return ((n * (n-1))/2) - gp;
    }
};
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long int>prefix(n, 0);
        prefix[0]=nums[0];

        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1]+nums[i];
        }

        int cnt=0;

        for(int i=1; i<n; i++){
            if(prefix[i-1] >= (prefix[n-1]-prefix[i-1])) cnt++;
        }
        return cnt;
    }
};
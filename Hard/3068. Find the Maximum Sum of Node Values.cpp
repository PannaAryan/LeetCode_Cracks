class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<long long> deltas(n); 
        for (int i = 0; i < n; i++) {
            deltas[i] = (nums[i] ^ k) - nums[i];
        }
        sort(deltas.rbegin(), deltas.rend());

        long long res = 0;
        for (int num : nums) {
            res += num;
        }

        for (int startInd = 0; startInd < n - 1; startInd += 2) {
            long long change = deltas[startInd] + deltas[startInd + 1]; 
            if (change > 0) {
                res += change;
            } else {
                break;
            }
        }

        return res;
    }
};
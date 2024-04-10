class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxx = 0, n = nums.size();

        for (int i = 0; i < n / 2; i++) {
            int temp = nums[i] + nums[n - 1 - i];
            maxx = max(maxx, temp);
        }
        return maxx;
    }
};
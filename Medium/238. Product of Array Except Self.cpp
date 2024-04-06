class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>suffix(n, 1);

        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        int temp=1;

        for(int i=1; i<n; i++){
            temp *= nums[i-1];
            suffix[i] *= temp;
        }
        return suffix;

    }
};
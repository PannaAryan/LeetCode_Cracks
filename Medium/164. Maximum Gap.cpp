class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxx=-0;
        sort(nums.begin(), nums.end());
        if(nums.size()<2) return 0;
        for(int i=0; i<nums.size()-1; i++){
            int temp = nums[i+1] - nums[i];
            if(maxx < temp ) maxx = temp;
        }
        return maxx;
    }
};
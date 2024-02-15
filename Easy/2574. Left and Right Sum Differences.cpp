class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }

        vector<int>ans;

        int left=0;

        ans.push_back(sum - nums[0]);

        if(nums.size()==1) return ans;

        sum -= nums[0];

        for(int i=1; i<nums.size(); i++){
            sum -= nums[i];
            left += nums[i-1];
            ans.push_back(abs(left-sum));
        }
        return ans;
    }
};
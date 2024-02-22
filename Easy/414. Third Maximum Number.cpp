class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int dis=1;
        int ans=nums[nums.size()-1];
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i]!=nums[i-1]){
                dis++;
                if(dis==3){
                    ans = nums[i-1];
                    break;
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxx = 1, temp = 1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]) temp++;
            else{
                if(maxx<temp) maxx = temp;
                temp = 1;
            }
            if(maxx<temp) maxx = temp;
        }
        temp = 1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]) temp++;
            else{
                if(maxx<temp) maxx = temp;
                temp = 1;
            }
            if(maxx<temp) maxx = temp;
        }
        return maxx;
    }
};
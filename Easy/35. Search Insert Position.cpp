class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int output;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= target){
                output = i;
                break;
            }
            if(i== nums.size()-1 && nums[i] < target){
                output = i+1;
                break;
            }

        }
        return output;
    }
};
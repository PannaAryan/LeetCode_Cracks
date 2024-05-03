class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();


        for(int i=0, j=n-1; i<j;){
            if(abs(nums[i])==nums[j]  && nums[i]<0){
                return nums[j];
            }
            else if(abs(nums[i])<nums[j]){
                j--;
            }
            else i++;
        }
        return -1;
    }
};
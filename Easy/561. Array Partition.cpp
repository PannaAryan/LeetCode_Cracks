class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        long total = 0;

        for(int i=0; i< nums.size(); i++){
            total += nums[i];
            i++;
            //total %= INT_MAX;
        }

        return total;
    }
};
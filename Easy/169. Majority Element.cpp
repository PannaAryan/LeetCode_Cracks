class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxx=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                maxx++;
                if(maxx> (nums.size()/2)){
                    return nums[i];
                }
            }
            else maxx=1;
        }
        return nums[0];
    }
};
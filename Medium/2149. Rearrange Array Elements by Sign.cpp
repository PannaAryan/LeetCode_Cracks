class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v, vv;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0) v.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0) vv.push_back(nums[i]);
        }
        for(int i=0, j=0; i<nums.size(); j++){
            nums[i]=v[j];
            nums[i+1]=vv[j];
            i+=2;
        }
        return nums;

    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx=0, next=0;
        if(nums.size()==1) return true;
        for(int i=0; i<nums.size(); i++){
            next=nums[i];
            maxx= max(maxx, next);
            next--;
            maxx--;
            if(maxx<0 && i!= nums.size()-1) return false;
        }
        return true;
    }
};
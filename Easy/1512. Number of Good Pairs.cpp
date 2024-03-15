class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt=1, pairs=0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }
            else{
                pairs += (cnt*(cnt-1))/2;
                cnt = 1;
            }
            if(cnt>1 && i==nums.size()-2) pairs += (cnt*(cnt-1))/2;
        }
        return pairs;
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int l=0;
        int r=0;
        int sum=0;
        int length= INT_MAX;

        while(r < nums.size()){
            sum += nums[r];
            while(sum >= target){
                sum -= nums[l];
                length = min(r-l+1, length);
                l++;
            }
            r++;
        }
        return length == INT_MAX ? 0 : length;
    }
};
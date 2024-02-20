class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long int l = (n+1)*n /2;

        for(int i=0; i<n; i++){
            l -= nums[i];
        }

        return l;
    }
};
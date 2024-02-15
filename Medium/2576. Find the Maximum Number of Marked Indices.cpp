class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int p = 0;
        int n= nums.size();
        int q = (n + 1)/2;

        while(p<n && q<n){
            if(nums[p]*2 <= nums[q]){
                p++;
            }
            q++;
        }
        return 2*p;
    }
};
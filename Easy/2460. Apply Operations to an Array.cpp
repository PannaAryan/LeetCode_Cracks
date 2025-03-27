class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]==nums[i+1]){
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            }
    
            int n = nums.size();
    
            vector<int>res(n, 0);
    
            int i=0;
    
            for(int j=0; j<n; j++){
                if(nums[j]!=0){
                    res[i]=nums[j];
                    i++;
                }
            }
            return res;
        }
    };
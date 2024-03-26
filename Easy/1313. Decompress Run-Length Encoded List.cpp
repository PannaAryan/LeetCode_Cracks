class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i+=2){
            int f=nums[i];
            int v=nums[i+1];
            for(int j=0; j<f; j++){
                ans.push_back(v);
            }
        }
        return ans;
    }
};
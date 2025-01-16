class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int c1 = nums1.size();
        int c2 = nums2.size();
        int x = 0, xx = 0;
        
        if (c1 % 2 != 0) {
            for (int num : nums2) {
                xx ^= num;
            }
        }
        if (c2 % 2 != 0) {
            for (int num : nums1) {
                x ^= num;
            }
        }
        return x ^ xx;
    }
};
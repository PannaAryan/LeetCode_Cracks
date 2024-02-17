class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        vector<int>merged;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while(i<nums1.size()){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            merged.push_back(nums2[j]);
                j++;
        }

        int n = nums1.size();
        int m = nums2.size();

        if((n+m)%2==0){
            double a = merged[(n+m)/2] + merged[(n+m)/2  -1];
            return a/2;
        }
        else{
             double a = merged[(n+m)/2];
             return a;
        }

    }
};
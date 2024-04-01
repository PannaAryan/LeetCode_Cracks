class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digSum=0;

        for(int x:nums){
            sum+=x;
            while(x!=0){
                digSum+= x%10;
                x /= 10;
            }
        }

        return sum-digSum;
    }
};
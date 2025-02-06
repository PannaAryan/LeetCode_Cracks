class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int>pairs;
        int n = nums.size();
        int result = 0;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int product = nums[i]*nums[j];
                pairs[product]++;
            }
        }

        for(const auto& element : pairs){
            int cnt = element.second;
            if(cnt > 1){
                int pair = (cnt * (cnt - 1))/2;
                result += pair*8;
            }
        }
        return result;
    }
};
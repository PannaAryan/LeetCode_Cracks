bool compare(int a, int b){
    string aa = to_string(a);
    string bb = to_string(b);
    return aa + bb > bb + aa;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);

        string ans = "";

        for(int i=0; i<nums.size(); i++){
            ans += to_string(nums[i]);
            if(ans[0]=='0') return "0";
        }
        return ans;
    }
};
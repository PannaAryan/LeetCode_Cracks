class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>m;
        int maxx=0;

        for(auto num : nums){
            m[num]++;
            maxx = max(maxx, m[num]);
        }

        int total=0;

        for (auto& [num, freq] : m) {
            if (freq == maxx) {
               total += freq;
            }
        }
        return total;
    }
};
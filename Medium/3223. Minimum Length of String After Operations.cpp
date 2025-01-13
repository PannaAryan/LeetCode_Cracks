class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> frq;

        for (char c : s) {
            frq[c]++;
        }

        int cnt = 0;

        for (auto& pair : frq) {
            if (pair.second > 2) {
                cnt += ((pair.second-1) / 2);
            }
        }
        return s.length()-cnt*2;
    }
};
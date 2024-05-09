

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long sum = 0;
        int n = happiness.size();
        for (int i = n - 1, j = 0; i >= n - k; i--, j++) {
            if (happiness[i] - j < 0) {
                return sum;
            }
            sum += happiness[i] - j;
        }
        return sum;
    }
};
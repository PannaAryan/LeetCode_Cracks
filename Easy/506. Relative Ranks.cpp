class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<pair<int, int>> ans;
        int n = score.size();
        for (int i = 0; i < n; i++)
        {
            ans.push_back({score[i], i + 1});
        }

        sort(ans.begin(), ans.end(), greater<pair<int, int>>());

        vector<string> res(n);

        for (int i = 0; i < n; i++)
        {
            int temp = ans[i].second;

            if (i == 0)
            {
                res[temp - 1] = "Gold Medal";
            }
            else if (i == 1)
            {
                res[temp - 1] = "Silver Medal";
            }
            else if (i == 2)
            {
                res[temp - 1] = "Bronze Medal";
            }
            else
                res[temp - 1] = to_string(i + 1);
        }

        return res;
    }
};
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> counts(n, 0);
        vector<int> link(n, 0);
        
        for (auto& edge : edges) {
            link[edge[0]] ^= edge[1];
            counts[edge[0]]++;
            link[edge[1]] ^= edge[0];
            counts[edge[1]]++;
        }
        
        queue<int> Qu;
        vector<int> dists(n, 0);
        
        for (int i = 0; i < n; i++) {
            if (counts[i] == 1)
                Qu.push(i);
        }
        
        int stp = 1;
        while (!Qu.empty()) {
            int size = Qu.size();
            for (int j = 0; j < size; j++) {
                int temp = Qu.front();
                Qu.pop();
                link[link[temp]] ^= temp;
                counts[link[temp]]--;
                if (counts[link[temp]] == 1) {
                    dists[link[temp]] = max(stp, dists[link[temp]]);
                    Qu.push(link[temp]);
                }
            }
            stp++;
        }
        
        int max_dist = *max_element(dists.begin(), dists.end());
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (dists[i] == max_dist)
                res.push_back(i);
        }
        
        return res;
    }
};
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<bool> viz(n, 0);
        vector<vector<int>> adjes(n);
        
        for (auto& e : edges) {
            int u = e[0], v = e[1];
            adjes[u].push_back(v);
            adjes[v].push_back(u);
        }
        
        queue<int> q;
        
        q.push(source);
        viz[source]=1;
        
        while(!q.empty()){
            int v=q.front();
            q.pop();
            if (v==destination) return 1;
            for(int u: adjes[v]){
                if (!viz[u]){
                    q.push(u);
                    viz[u]=1;
                }
            }
        }
        return 0;
    }
};
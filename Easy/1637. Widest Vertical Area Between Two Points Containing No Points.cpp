class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int maxx=0;

        for(int i=0; i<points.size()-1; i++){
            int cur= points[i+1][0]-points[i][0];
            maxx = max(cur, maxx);
        }

        return maxx;
    }
};
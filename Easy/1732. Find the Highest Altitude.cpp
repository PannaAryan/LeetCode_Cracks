class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0, maxx=0;
        for(int x : gain){
            sum += x;
            maxx = max(sum, maxx);
        }
        return maxx;
    }
};
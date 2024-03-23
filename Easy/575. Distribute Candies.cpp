class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int ans=1;

        for(int i=0; i<candyType.size()-1; i++){
            if(candyType[i]!=candyType[i+1]) ans++;
        }

        if(ans > candyType.size()/2) return candyType.size()/2;
        else return ans;
    }
};
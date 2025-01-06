class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int ch : n){
            if((int)ch-48 > ans) ans = (int)ch-48;
        }
        return ans;
    }
};
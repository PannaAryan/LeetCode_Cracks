class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;

        while(n>0){
            if(n%2==0){
                n/=2;
            }
            else{
                cnt++;
                n/=2;
            }
        }
        return cnt;
    }
};
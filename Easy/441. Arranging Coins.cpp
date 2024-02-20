class Solution {
public:
    int arrangeCoins(int n) {
        int temp=0;
        for(int i=1; ; i++){
            if(n-i < 0) return temp;
            else if(n-i ==0) return temp+1;
            else{
                n -= i;
                temp++;
            }
        }
        return temp;
    }
};

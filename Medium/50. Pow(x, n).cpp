class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        int y=abs(n);
        
        while(y!=0){
            if(y%2!=0){
                ans *= x;
            }

            x *= x;
            y /= 2;
        }
        if(n<0) return 1/ans;
        return ans;
    }
};
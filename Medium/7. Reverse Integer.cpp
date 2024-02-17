class Solution {
public:
    int reverse(int x) {

        bool t = true;

        if(x<0){
            x = abs(x);
            t = false;
        }

        long ans=0;

        while(x!=0){
            ans = ans*10 + x%10;
            x = x/10;
        }

       if(ans > INT_MAX || ans < INT_MIN) return 0;
       if(t){
           return (int) ans;
       }
       else return (int) ans* -1;
       
    }
};
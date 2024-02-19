class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        if(num < 4) return false;
        int i=2;
        while(num/i >= i){
            if(num/i == i) {
                if(i*i == num)return true;
            }
            i++;
        }
        return false;
    }
};
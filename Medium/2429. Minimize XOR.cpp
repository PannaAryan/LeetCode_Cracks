class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setBitsInNum1 = __builtin_popcount(num1);
        int setBitsInNum2 = __builtin_popcount(num2);
        int answer = num1;
        
        for (int bitPosition = 0; bitPosition < 32; ++bitPosition) {
            int mask = 1 << bitPosition;
            
            if (setBitsInNum1 > setBitsInNum2 && (mask & num1)) {
                answer ^= mask;
                setBitsInNum1--;
            }
            
            if (setBitsInNum1 < setBitsInNum2 && !(mask & num1)) {

                answer ^= mask;
                setBitsInNum1++;
            }
        }
        
        return answer;
    }
};
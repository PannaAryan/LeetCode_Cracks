class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        long ans = 0;

        while (s[i] == ' ') {
            i++;
        }

        if (s[i] == '-' || s[i] == '+') {
            if (s[i] == '-') sign = -1;
            i++;
        }

        while (i < s.size() && isdigit(s[i])) {
            
            if (sign == 1 && (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && (s[i] - '0') > 7)))
                return INT_MAX;
            if (sign == -1 && (-ans < INT_MIN / 10 || (-ans == INT_MIN / 10 && (s[i] - '0') > 8)))
                return INT_MIN;

            ans = ans * 10 + (s[i] - '0');
            
            i++;
        }

        return ans * sign;
    }
};

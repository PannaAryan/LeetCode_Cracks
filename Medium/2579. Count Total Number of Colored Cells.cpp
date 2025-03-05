class Solution {
    public:
        long long coloredCells(int n) {
            if(n==1) return 1;
    
            long long sum = 1;
            
            for(int i=2; i<=n; i++){
                long long temp = i + ((i-1)*2) + (i-2);
                sum += temp;
            }
    
            return sum;
        }
    };
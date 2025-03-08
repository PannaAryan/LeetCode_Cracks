class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int cnt=0;
            int n = blocks.size();
    
            for(int i=0; i<k; i++){
                if(blocks[i]=='B') cnt++;
            }
    
            int maxx = cnt;
    
            for(int i=k; i<n; i++){
                if(blocks[i-k]=='W' && blocks[i]=='B'){
                    cnt++;
                    maxx = max(cnt, maxx);
                }
                else if(blocks[i-k]=='B' && blocks[i]=='W'){
                    cnt--;
                    maxx = max(cnt, maxx);
                }
                
            }
    
            return k-maxx;
        }
    };
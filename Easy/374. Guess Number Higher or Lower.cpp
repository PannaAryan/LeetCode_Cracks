/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=0, e=n;
        int mid= s+(e-s)/2;
        int ans;

        while(s<=e){
            int picked = guess(mid);
            if(picked == -1){
                e = mid-1;
            }
            else if(picked == 1){
                s = mid +1;
            }
            else{
                ans = mid;
                break;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        
        int num = 0;
        int i=0, j=n-1;

        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
                num++;
            }
            else if(i==j){
                num++;
                break;
            }
            else{
                num++;
                j--;
            }

        }
        return num;
    }
};
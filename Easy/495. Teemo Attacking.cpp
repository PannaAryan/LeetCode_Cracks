class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total=duration;
        for(int i=0; i<timeSeries.size()-1; i++){
            
            if(timeSeries[i]+duration < timeSeries[i+1]){
                total += duration;
            }
            else{
                total += timeSeries[i+1]-timeSeries[i];
            }
        }
        return total;
    }
};
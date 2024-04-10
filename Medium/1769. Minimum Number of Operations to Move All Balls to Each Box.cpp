class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        int n=boxes.size();

        for(int i=0; i<n; i++){
            int temp=0;
            for(int j=0; j<n; j++){
                int t= boxes[j]-'0';
                if(t==1) temp += abs(i-j);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
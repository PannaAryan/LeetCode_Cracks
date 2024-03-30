class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        string t="type", c="color", n="name";
        int cnt=0;
        for(int i=0; i<items.size(); i++){
            if(ruleKey==t && ruleValue==items[i][0]) cnt++;
            else if(ruleKey==c && ruleValue==items[i][1]) cnt++;
            else if(ruleKey==n && ruleValue==items[i][2]) cnt++;
        }
        return cnt;
    }
};

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int cnt=0;

        for(int i=0; i<words.size(); i++){
            if(words[i].substr(0, n)==pref) cnt++;
        }
        return cnt;
    }
};
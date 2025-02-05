class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();
        int diff = 0;
        string sa = "", sb = "";


        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                diff++;
                sa += s1[i];
                sb += s2[i];
            }
        }

        if(diff==0) return true;
        else if(diff==2){
            if(sa[0]==sb[1] && sa[1]==sb[0]) return true;
        }
        return false;
    }
};
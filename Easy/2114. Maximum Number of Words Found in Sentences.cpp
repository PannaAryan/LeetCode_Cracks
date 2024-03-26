class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt=1, maxx=1;
        for(int i=0; i<sentences.size(); i++){
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j]==' ') cnt++;
            }
            maxx = max(cnt, maxx);
            cnt=1;
        }

        return maxx;
    }
};
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size(), sum=0;
        vector<int>pre(n, 0);

        for(int i=0; i<n; i++){
            int m = words[i].size();
            if((words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o' || words[i][0]=='u') && (words[i][m-1]=='a' || words[i][m-1]=='e' || words[i][m-1]=='i' || words[i][m-1]=='o' || words[i][m-1]=='u')){
                sum++;
            }
            pre[i]=sum;
        }

        int q=queries.size();
        vector<int>res(q,0);

        for(int i=0; i<q; i++){
            if(queries[i][0]==0) res[i]=pre[queries[i][1]];
            else res[i]=pre[queries[i][1]]-pre[queries[i][0]-1];
        }

        return res;
    }
};
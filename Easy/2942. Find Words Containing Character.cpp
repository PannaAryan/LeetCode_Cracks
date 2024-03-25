class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>cnt;
        for(int i=0; i<words.size(); i++){
            if (words[i].find(x) != std::string::npos) cnt.push_back(i);
        }

        return cnt;
    }
};
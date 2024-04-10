class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n = words.size(),l,r;
        bool flag;
        for(int i = 0;i<n;++i)
        {
            flag = true;
            l = 0; 
            r = words[i].size()-1;
            while(l<r)
            {
                if(words[i][l] != words[i][r])
                    {
                        flag = false;
                        break;
                    }
                ++l;
                --r;
            }
            if(flag)
                return words[i];

        }
        return "";
    }

};
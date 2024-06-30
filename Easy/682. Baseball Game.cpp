#include <vector>
#include <string>
#include <cstdlib> 

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;

        for(string& op : operations){
            if(op == "C"){
                if(!scores.empty()){
                    scores.pop_back();
                }
            }
            else if(op == "D"){
                if(!scores.empty()){
                    scores.push_back(2*scores.back());
                }
            }
            else if(op == "+"){
                int s = scores.size();
                scores.push_back(scores[s-1]+scores[s-2]);
            }
            else{
                scores.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int score : scores) {
            sum += score;
        }

        return sum;
    }
};

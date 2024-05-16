#include<bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int pieces = 1;
    bool isZero = (s[0] == '0');

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            isZero = false;
        }
        else{
            if(isZero){
                continue;
            }
            else{
                pieces++;
            }
        }
        
    }
    cout<<pieces<<"\n";
    return;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        solve();
    }

}
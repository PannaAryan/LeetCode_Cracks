#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> h;
    int k;
    int n, tmp;
    cin >> k >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        h.push_back(tmp);
    }

    sort(h.begin(), h.end());

    int sum = 0;

    for (int i = h.size() - 1, j = 0; i >= h.size() - k; i--, j++)
    {

        if (h[i] - j <= 0){

            cout<<sum<<endl;
            return 0;
        }
        sum += h[i] - j;
        cout<<"rr "<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
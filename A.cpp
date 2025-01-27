#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin>>n;
   int arr[n];
   bool flag=false;

   for(int i=0; i<n; i++) cin>>arr[i];

   double ratio=(double)(arr[n-1]/arr[n-2]);
   for(int i=1; i<n; i++){
    double temp = (double)(arr[i]/arr[i-1]);
    if(temp!=ratio){
        flag=true;
        break;
    }
   }
   if(flag) cout<<"No";
   else cout<<"Yes";
}
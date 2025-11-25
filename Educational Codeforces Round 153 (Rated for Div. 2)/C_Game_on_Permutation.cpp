
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int ans=0,mn=INT_MAX,mn1=INT_MAX;


   for(int i=0;i<n;i++)
   {
        if(v[i]>mn && v[i]<mn1)
        {
            ans++;
            mn1=min(mn1,v[i]);
        }
        mn=min(v[i],mn);
   }
   cout<<ans<<endl;
}
main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
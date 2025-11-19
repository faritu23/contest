
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n;cin>>n;
   vector<pair<int,int>>p;
   int mx=0;
   for(int i=0;i<n;i++)
   {
        int a,b; cin>>a>>b;
        p.push_back({a,b});
        mx=max(mx,a/b);
   }
   for(int i=0;i<n;i++)
   {
        if(p[i].first/p[i].second==mx)
        {
            cout<<i+1<<endl;return;
        }
   }
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
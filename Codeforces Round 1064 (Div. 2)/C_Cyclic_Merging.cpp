
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> v(n),v1;
   for(int i=0;i<n;i++) cin>>v[i];
   int mx=0,ans=0;
   
   v.push_back(v[0]);
   for(int i=0;i<n;i++)
   {
        ans+=max(v[i],v[i+1]);
        mx=max(v[i],mx);
   }
   cout<<ans-mx<<endl;
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

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   int ans=0,mn=0,mx=0;
   vector<int> a(n),b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   for(int i=0;i<n;i++)
   {
       int x=min(mn-a[i],b[i]-mx);
       mx=max(mx-a[i],b[i]-mn);
       mn=x;
   }
   cout<<max(mn,mx)<<endl;
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
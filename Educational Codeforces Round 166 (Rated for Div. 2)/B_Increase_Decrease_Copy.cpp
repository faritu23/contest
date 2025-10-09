
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;
   vector<int> a(n),b(n+1);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<=n;i++) cin>>b[i];

   int l=INT_MAX,r=INT_MIN,ans=0,k=0,mn=INT_MAX;
   for(int i=0;i<n;i++)
   {
        l=min(a[i],b[i]);
        r=max(a[i],b[i]);
        if(b[n]>=l && b[n]<=r)k=1;
        int x=abs(a[i]-b[n]);
        int y=abs(b[i]-b[n]);
        mn=min({x,y,mn});
        ans+=abs(a[i]-b[i]);
   }
   if(k) ans+=k;
   else ans+=mn+1;

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
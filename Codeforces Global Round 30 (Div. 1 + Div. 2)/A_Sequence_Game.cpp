
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n;cin>>n;
   int mx=-100000000000,mn=LLONG_MAX;
   for(int i=0;i<n;i++)
   {
    int x; cin>>x;
    mx=max(x,mx);
    mn=min(x,mn);
   }

   int x; cin>>x;
   if(x>=mn && x<=mx) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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
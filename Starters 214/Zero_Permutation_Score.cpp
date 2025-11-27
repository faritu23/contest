
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n; cin>>n;

   int ans=0;
   if(n<4){
    cout<<0<<endl;return;
   }
   for(int i=2;i<=n;i+=2){
    // cout<<n-i-1<<endl;
    if(n-i-1>0)
    ans+=n-i-1;
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
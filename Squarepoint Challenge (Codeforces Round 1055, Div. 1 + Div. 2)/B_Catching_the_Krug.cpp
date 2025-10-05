
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,rk,ck,rd,cd,ans=0;
   cin>>n>>rk>>ck>>rd>>cd;

   //k ke dora hoba
   if(rk<rd) ans=max(ans,rd);
   if(rk>rd) ans=max(ans,n-rd);
   if(ck<cd) ans=max(ans,cd);
   if(ck>cd) ans=max(ans,n-cd);

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
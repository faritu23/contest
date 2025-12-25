
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,m; cin>>n>>m;

   int a=__lg(m);
   a=powl(2,a);
   int ans=(m-a+1)*2;
   
   if(n==1) cout<<m+1<<endl;
   else cout<<ans<<endl;
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
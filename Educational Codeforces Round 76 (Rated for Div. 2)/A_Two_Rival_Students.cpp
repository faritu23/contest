
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int n,x,a,b; cin>>n>>x>>a>>b;
    int mn=min(a,b),mx=max(a,b);
    int remain=(mn-1)+(n-mx),ans=mx-mn;
    if(x>=remain)ans=n-1;
    else ans+=x;
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
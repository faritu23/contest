
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,x,k; cin>>n>>x>>k;
   int a=x- ((x/k)*k);
   int b=(((x+k-1)/k)*k);
//    cout<<a<<" "<<b<<endl;
   if(b-x<a && b<=n)cout<<b-x<<endl;
   else cout<<a<<endl;
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
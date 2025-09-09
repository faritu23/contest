
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
    int a,b;cin>>a>>b;
    if(a==b)cout<<0<<endl;
    else if(a%b==0 || b%a==0) cout<<1<<endl;
    else cout<<2<<endl;
   
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
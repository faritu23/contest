
#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
 int n; cin>>n;
 if(n%3==0) cout<<0<<endl;
 else{
    int ans=((n/3)+1)*3;
    int a=ans-n;
    cout<<a<<endl;
 }  
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

#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
void solve()
{
   int n,x; cin>>n>>x;
   int ans=0,mx=0,m;
   for(int i=0;i<n;i++)
   {
        int a,b,c; cin>>a>>b>>c;
        ans+=(a*(b-1));
        mx=max((a*b )- c ,mx);
        // cout<<ans<<" "<<mx<<" ";
    }
    if(ans>=x){
        cout<<0<<endl;return;
    }
    if(mx==0){
        cout<<-1<<endl;return;
    }
    else{
        x-=ans;
        int ans1=(x+mx-1)/mx;
        cout<<ans1<<endl;
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